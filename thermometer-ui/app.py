from flask import Flask, render_template, request, jsonify, redirect, url_for

app = Flask(__name__)

# Initial desired temperature
desired_temperature = 20.0

# Placeholder values for vent's state
vent_battery_level = 75.0
vent_open_state = 50.0
vent_current_temperature = 18.0 

@app.route('/')
def home():
    return render_template('index.html', desired_temperature=desired_temperature,
                           vent_battery_level=vent_battery_level,
                           vent_open_state=vent_open_state,
                           vent_current_temperature=vent_current_temperature)

@app.route('/set_vent_state', methods=['POST'])
def set_vent_state():
    global vent_battery_level, vent_open_state, vent_current_temperature
    vent_battery_level = float(request.form.get('vent_battery_level'))
    vent_open_state = float(request.form.get('vent_open_state'))
    vent_current_temperature = float(request.form.get('vent_current_temperature'))

    return jsonify({
        'success': True,
        'vent_battery_level': vent_battery_level,
        'vent_open_state': vent_open_state,
        'vent_current_temperature': vent_current_temperature
    })

@app.route('/increment_desired_temperature', methods=['POST'])
def increment_desired_temperature():
    global desired_temperature
    desired_temperature += 1
    return redirect(url_for('home'))

@app.route('/decrement_desired_temperature', methods=['POST'])
def decrement_desired_temperature():
    global desired_temperature
    desired_temperature -= 1
    return redirect(url_for('home'))

@app.route('/get_vent_open_state', methods=['GET'])
def get_vent_open_state():
    return jsonify({'vent_open_state': vent_open_state})

if __name__ == '__main__':
    app.run(debug=True, host="::", port=8080)