from flask import Flask, render_template, request, jsonify

app = Flask(__name__)

# Initial desired temperature
desired_temperature = 20.0

# Placeholder values for vent's state
vent_battery_level = 75.0
vent_open_state = 50.0
vent_current_temperature = 18.0  # Placeholder, replace with actual logic to get temperature

@app.route('/')
def home():
    return render_template('index.html', desired_temperature=desired_temperature,
                           vent_battery_level=vent_battery_level,
                           vent_open_state=vent_open_state,
                           vent_current_temperature=vent_current_temperature)

@app.route('/customize_vent_state', methods=['PATCH'])
def customize_vent_state():
    global vent_battery_level, vent_open_state, vent_current_temperature
    # Assuming the UI provides the vent's state details through a PATCH request
    vent_battery_level = float(request.form.get('vent_battery_level'))
    vent_open_state = float(request.form.get('vent_open_state'))
    vent_current_temperature = float(request.form.get('vent_current_temperature'))

    return jsonify({
        'success': True,
        'vent_battery_level': vent_battery_level,
        'vent_open_state': vent_open_state,
        'vent_current_temperature': vent_current_temperature
    })

@app.route('/set_desired_temperature', methods=['POST'])
def set_desired_temperature():
    global desired_temperature
    new_temperature = float(request.form.get('new_temperature'))
    desired_temperature = new_temperature
    return jsonify({'success': True, 'desired_temperature': desired_temperature})

@app.route('/get_vent_open_state', methods=['GET'])
def get_vent_open_state():
    return jsonify({'vent_open_state': vent_open_state})

if __name__ == '__main__':
    app.run(debug=True, port=8080)

# Flask UI receives the vent's current battery level (%), open state (%), and the current temperature of the room it's in (Celsius) [vent changes this through a PATCH request]
    
# Flask UI lets the user customize the desired temperature of the vent's room, but that information is only used for calculation

# Flask UI provides what the vent's open state should be set to (%) [vent does this through aPOST request]
# We'll consider the case of winter, where the heater is turned on
# The open state is calculated as: 100% if the current temperature < desired temperature, 0% if the current temperature > desired temperature