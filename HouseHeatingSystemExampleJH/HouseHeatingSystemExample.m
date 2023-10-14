%% House Heating System
% 
% This example shows how to model a simple house heating system. The model 
% contains a heater, a controller, and a house structure with four radiators
% and four rooms. Each room exchanges heat with the environment through its
% exterior walls, roof, and windows. Each path is simulated as a combination
% of a thermal convection, thermal conduction, and the thermal mass. It is
% assumed that heat is not transferred internally between rooms.
% The heater consists of a furnace, a boiler, an accumulator, and a pump to 
% circulate hot water in the system. The controller starts admitting fuel 
% into the furnace if the overall average temperature of rooms falls below 
% 21 degree C and it stops if the temperature exceeds 25 degree C. 
% The simulation calculates the heating cost and indoor temperatures. 
%
% Copyright 2015-2016 The MathWorks, Inc.


%% Model

open_system('HouseHeatingSystem')

set_param(find_system(bdroot,'FindAll','on','type','annotation','Tag','ModelFeatures'),'Interpreter','off');

%% House Thermal Network
%%
% 
% It consists of four radiators and four rooms. 

% The thermal power generated by the engine is calculated as a function of 
% the instantaneous engine speed and the engine torque. This power is 
% separated in two parts going to the water and the oil circuit. It is 
% assumed that 50% of the amount of heat rejected from the engine is added 
% to the coolant and 20% of the heat rejected from the engine is added to 
% the oil.

open_system('HouseHeatingSystem/House thermal network','force')


%% Radiator Subsystem
open_system('HouseHeatingSystem/House thermal network/Radiator1','force')


%% Room Subsystem
%%
open_system('HouseHeatingSystem/House thermal network/Room 1','force')

%% Indoor Average Temperature Subsystem
open_system(sprintf('HouseHeatingSystem/House thermal network/Indoor average\ntemperature'),'force')


%% Heater Subsystem
open_system('HouseHeatingSystem/Heater','force')


%% Boiler Subsystem
open_system('HouseHeatingSystem/Heater/Boiler','force')


%% Control Subsystem
open_system('HouseHeatingSystem/Control','force')


%% Simulation Results from Simscape Logging
%%
%
% The first plot shows the temperature variation of each room compared to the 
% outside temperature fluctuations. The second plot shows the average overall 
% temperatures of roof, walls, and windows.
%

HouseHeatingSystemPlot1T;

%%
%
% These plots show heat flow rate from furnace to the boiler and to
% radiators. The cost of fuel is calculated based on the fuel mass flow rate
% through the furnace. It is assumed that the fuel has the density of 
% natural gas (~ 0.9 kg/m^3) and the cost of natural gas is $8.50 per 
% thousand cubic feet (Mcf): $8.50 per 1000 cf. 
%

HouseHeatingSystemPlot2Fuel; 

%% Fluid Properties
%%
%
% This figure plots the fluid properties of water as functions of pressure 
% and temperature.
%
HouseHeatingSystemFluidProp(figure);
%%
