from flask import Flask, render_template, request, jsonify, redirect, url_for
app = Flask(__name__)

# Desired temperature, updated by user
desired_temperature = 20

# Temperature, updated every minute by vent
current_temperature = 18

# Battery level, updated every minute by vent
vent_battery_level = 97

# Servo rotation, calculated by hub and fetched by vent every 15 minutes
servo_open_percent = 100

def update_servo_position():
    global desired_temperature, current_temperature, servo_open_percent
    if (current_temperature < desired_temperature):
        servo_open_percent = 100
    else:
        servo_open_percent = 0

@app.route('/')
def home():
    return render_template('index.html', desired_temperature=desired_temperature, current_temperature=current_temperature, vent_battery_level=vent_battery_level, servo_open_percent=servo_open_percent)

@app.route('/living_room')
def living_room():
    return render_template('living_room.html', desired_temperature=desired_temperature, current_temperature=current_temperature, vent_battery_level=vent_battery_level, servo_open_percent=servo_open_percent)

@app.route('/set_vent_state', methods=['POST'])
def set_vent_state():
    global vent_battery_level, current_temperature
    vent_battery_level = int(request.get_json().get('vent_battery_level'))
    current_temperature = float(request.get_json().get('current_temperature'))
    update_servo_position()

    return jsonify({
        'success': True,
        'vent_battery_level': vent_battery_level,
        'current_temperature': current_temperature
    })

@app.route('/increment_desired_temperature', methods=['POST'])
def increment_desired_temperature():
    global desired_temperature, current_temperature, servo_open_percent
    desired_temperature += 1
    update_servo_position()

    return redirect(url_for('living_room'))

@app.route('/decrement_desired_temperature', methods=['POST'])
def decrement_desired_temperature():
    global desired_temperature, current_temperature, servo_open_percent
    desired_temperature -= 1
    update_servo_position()

    return redirect(url_for('living_room'))

@app.route('/get_servo_open_percent', methods=['GET'])
def get_servo_open_percent():
    return jsonify({'servo_open_percent': servo_open_percent})

@app.route('/get_current_temperature', methods=['GET'])
def get_current_temperature():
    return jsonify({'current_temperature': current_temperature, 'desired_temperature': desired_temperature})

if __name__ == '__main__':
    app.run(debug=True, host="::", port=8080)
