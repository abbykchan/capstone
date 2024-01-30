from flask import Flask, render_template, request, jsonify

app = Flask(__name__)

# Initial desired temperature
desired_temperature = 20.0

@app.route('/')
def home():
    return render_template('index.html', desired_temperature=desired_temperature)

@app.route('/get_desired_temperature', methods=['GET'])
def get_desired_temperature():
    return jsonify({'desired_temperature': desired_temperature})

@app.route('/set_desired_temperature', methods=['POST'])
def set_desired_temperature():
    global desired_temperature
    new_temperature = float(request.form.get('new_temperature'))
    desired_temperature = new_temperature
    return jsonify({'success': True, 'desired_temperature': desired_temperature})

if __name__ == '__main__':
    app.run(debug=True, host='::', port=8080)
