%% Plot Description:
%
% These plots show heat flow rate from furnace to the boiler and to
% radiators. The cost of fuel is calculated based on the fuel mass flow rate
% through the furnace. It is assumed that the fuel has the density of 
% natural gas (~ 0.9 kg/m^3) and the cost of natural gas is $8.50 per 
% thousand cubic feet (Mcf): $8.50 per 1000 cf. 

% Copyright 2015-2022 The MathWorks, Inc.

% Generate simulation results if they don't exist
if(~exist('simlog_HouseHeatingSystem','var'))
        sim('HouseHeatingSystem')
end

% Reuse figure if it exists, else create new figure
if ~exist('h2_HouseHeatingSystem', 'var') || ...
        ~isgraphics(h2_HouseHeatingSystem, 'figure')
    h2_HouseHeatingSystem = figure('Name', 'HouseHeatingSystem');
end
figure(h2_HouseHeatingSystem)
clf(h2_HouseHeatingSystem)

plotFuel(simlog_HouseHeatingSystem, fuel_cost)

% Create plots from simulation results
function plotFuel(simlog, fuel_cost)

% Get simulation results
t              = simlog.Heater.Pipe_TL.segment.rho_I.series.time/3600; % [hrs]
Pwth_boiler    = -simlog.Heater.Boiler.E_NTU_Heat_Exchanger_TL.heat_transfer.Q.series.values('kW');
Pwth_radiator1 = simlog.House_thermal_network.Radiator1.Convective_Heat_Transfer.Q.series.values('kW');
Pwth_radiator2 = simlog.House_thermal_network.Radiator2.Convective_Heat_Transfer.Q.series.values('kW');
Pwth_radiator3 = simlog.House_thermal_network.Radiator3.Convective_Heat_Transfer.Q.series.values('kW');
Pwth_radiator4 = simlog.House_thermal_network.Radiator4.Convective_Heat_Transfer.Q.series.values('kW');
mdot_fuel      = simlog.Heater.Boiler.Furnace.Mdot_fuel.series.values('kg/s');

% Total heat flow rate through the radiators
Pwth_radiators = Pwth_radiator1 + Pwth_radiator2 + Pwth_radiator3 + Pwth_radiator4; 

% Plot results
% handles(1) = subplot(3,1,1);
plot(t, Pwth_radiators)
hold on
plot(t, Pwth_boiler)
hold off
grid on
xlabel('Time (hrs)')
ylabel({'Thermal'; 'power (kW)'})
legend({'Radiators','Boiler'}, 'Location', 'northeast')
title('Thermal power to boiler & radiators')

% handles(2) = subplot(3,1,2);
% plot(t, mdot_fuel, 'b')
% grid on
% xlabel('Time (hrs)')
% ylabel('Mass flow (kg/s)')
% title('Fuel mass flow rate')
% 
% handles(3) = subplot(3,1,3);
% plot(t, fuel_cost)
% title('Fuel cost')
% grid on
% xlabel('Time (hrs)')
% ylabel('Cost ($)')

% linkaxes(handles, 'x')

end