%% Plot Description:
%
% The first plot shows the temperature variation of each room compared to the 
% outside temperature fluctuations. The second plot shows the overall average 
% temperatures of roof, walls, and windows.

% Copyright 2015-2022 The MathWorks, Inc.

% Generate simulation results if they don't exist
if(~exist('simlog_HouseHeatingSystem','var'))
        sim('HouseHeatingSystem')
end

% Reuse figure if it exists, else create new figure
if ~exist('h1_HouseHeatingSystem', 'var') || ...
        ~isgraphics(h1_HouseHeatingSystem, 'figure')
    h1_HouseHeatingSystem = figure('Name', 'HouseHeatingSystem');
end
figure(h1_HouseHeatingSystem)
clf(h1_HouseHeatingSystem)

plotTemperature(simlog_HouseHeatingSystem)

% Create plots from simulation results
function plotTemperature(simlog)

% Get simulation results
t = simlog.Heater.Pipe_TL.segment.rho_I.series.time/3600; % [hrs]
disp(min(t))
disp(length(t))
T_room1 = simlog.House_thermal_network.Room_1.Temperature_sensor.Temperature_Sensor.T.series.values('degC'); 
T_room2 = simlog.House_thermal_network.Room_2.Temperature_sensor.Temperature_Sensor.T.series.values('degC'); 
T_room3 = simlog.House_thermal_network.Room_3.Temperature_sensor.Temperature_Sensor.T.series.values('degC'); 
T_room4 = simlog.House_thermal_network.Room_4.Temperature_sensor.Temperature_Sensor.T.series.values('degC'); 


% Roof temperatures
T_roof_room1 = simlog.House_thermal_network.Room_1.Roof_thermal_mass.T.series.values('degC');
T_roof_room2 = simlog.House_thermal_network.Room_2.Roof_thermal_mass.T.series.values('degC');
T_roof_room3 = simlog.House_thermal_network.Room_3.Roof_thermal_mass.T.series.values('degC');
T_roof_room4 = simlog.House_thermal_network.Room_4.Roof_thermal_mass.T.series.values('degC');

% Wall temperatures
T_wall_room1 = simlog.House_thermal_network.Room_1.Wall_thermal_mass.T.series.values('degC');
T_wall_room2 = simlog.House_thermal_network.Room_2.Wall_thermal_mass.T.series.values('degC');
T_wall_room3 = simlog.House_thermal_network.Room_3.Wall_thermal_mass.T.series.values('degC');
T_wall_room4 = simlog.House_thermal_network.Room_4.Wall_thermal_mass.T.series.values('degC');

% Window temperatures
T_window_room1 = simlog.House_thermal_network.Room_1.Window_thermal_mass.T.series.values('degC');
T_window_room2 = simlog.House_thermal_network.Room_2.Window_thermal_mass.T.series.values('degC');
T_window_room3 = simlog.House_thermal_network.Room_3.Window_thermal_mass.T.series.values('degC');
T_window_room4 = simlog.House_thermal_network.Room_4.Window_thermal_mass.T.series.values('degC');

% Outdoor temperature
T_env = simlog.House_thermal_network.Room_1.Temperature_source_atmosphere.S.series.values('degC');

% Average temperatures
T_roof    = (T_roof_room1 + T_roof_room2 + T_roof_room3 + T_roof_room4)/4;
T_walls   = (T_wall_room1 + T_wall_room2 + T_wall_room3 + T_wall_room4)/4;
T_windows = (T_window_room1 + T_window_room2 + T_window_room3 + T_window_room4)/4;

% Get the value of the Constant block
desiredTemp = str2double(get_param('HouseHeatingSystem/T_desired', 'Value'));

% Plot results
% handles(1) = subplot(2,1,1);
plot(t, T_room1, 'LineWidth', 1)
hold on
plot(t, T_room2, 'LineWidth', 1)
% plot(t, T_room3, 'LineWidth', 1)
% plot(t, T_room4, 'LineWidth', 1)
plot(t, T_env, 'LineWidth', 1)
yline(desiredTemp, 'LineWidth', 1)
hold off
grid on
xlabel('Time (hrs)')
ylabel('Temperature (^{o}C)')
legend({'Room 1 (thermostat)','Room 2 (more windows)', 'Outside', 'Desired'}, 'Location', 'Best')
% legend({'Room1','Room2','Room3','Room4', 'Outside', 'Desired'}, 'Location', 'Best')
title('Indoor vs. outdoor temperature')

% handles(2) = subplot(2,1,2);
% plot(t, T_roof, 'LineWidth', 1)
% hold on
% plot(t, T_walls, 'LineWidth', 1)
% plot(t, T_windows, 'LineWidth', 1)
% hold off
% grid on
% xlabel('Time (hrs)')
% ylabel('Temperature (^{o}C)')
% legend({'Roof','Walls','Windows'}, 'Location', 'Best')
% title('Average temperatures')

% linkaxes(handles, 'x')

end