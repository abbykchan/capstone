from flask import Flask, render_template, request, jsonify, redirect, url_for
import datetime
import csv
import os

app = Flask(__name__)

# Initialize CSV file with headers if it doesn't exist or is empty
LOG_FILE = 'vent_log.csv'

# Check if the file is empty or doesn't exist
if not os.path.exists(LOG_FILE) or os.stat(LOG_FILE).st_size == 0:
    with open(LOG_FILE, 'a', newline='') as file:
        writer = csv.writer(file)
        writer.writerow(['Timestamp', 'Current Temperature', 'Desired Temperature', 'Servo Close Percent'])

# Desired temperature, updated by user
desired_temperature = 25

# Temperature, updated every minute by vent
current_temperature = 24

# Battery level, updated every minute by vent
vent_battery_level = 97

# Servo rotation, calculated by hub and fetched by vent every 15 minutes
servo_close_percent = 0

def update_servo_position():
    global desired_temperature, current_temperature, servo_close_percent
    if (current_temperature < desired_temperature):
        servo_close_percent = 0
    else:
        servo_close_percent = 100

@app.route('/')
def home():
    return render_template('index.html', desired_temperature=desired_temperature, current_temperature=current_temperature, vent_battery_level=vent_battery_level, servo_close_percent=servo_close_percent)

@app.route('/living_room')
def living_room():
    return render_template('living_room.html', desired_temperature=desired_temperature, current_temperature=current_temperature, vent_battery_level=vent_battery_level, servo_close_percent=servo_close_percent)

@app.route('/set_vent_state', methods=['POST'])
def set_vent_state():
    global vent_battery_level, current_temperature, desired_temperature, servo_close_percent

    # Update variables
    vent_battery_level = int(request.get_json().get('vent_battery_level'))
    current_temperature = float(request.get_json().get('current_temperature'))

    # Log to CSV
    print("logging state")
    timestamp = datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S')
    data = [timestamp, current_temperature, desired_temperature, servo_close_percent]
    with open(LOG_FILE, 'a', newline='') as file:
        writer = csv.writer(file)
        writer.writerow(data)

    # Recalculate servo position
    update_servo_position()

    return jsonify({
        'success': True,
        'vent_battery_level': vent_battery_level,
        'current_temperature': current_temperature
    })

@app.route('/increment_desired_temperature', methods=['POST'])
def increment_desired_temperature():
    global desired_temperature, current_temperature, servo_close_percent
    desired_temperature += 1
    update_servo_position()

    return redirect(url_for('living_room'))

@app.route('/decrement_desired_temperature', methods=['POST'])
def decrement_desired_temperature():
    global desired_temperature, current_temperature, servo_close_percent
    desired_temperature -= 1
    update_servo_position()

    return redirect(url_for('living_room'))

@app.route('/get_servo_close_percent', methods=['GET'])
def get_servo_close_percent():
    return jsonify({'servo_close_percent': servo_close_percent})

@app.route('/get_current_temperature', methods=['GET'])
def get_current_temperature():
    return jsonify({'current_temperature': current_temperature, 'desired_temperature': desired_temperature})

if __name__ == '__main__':
    app.run(debug=True, host="::", port=8080)
