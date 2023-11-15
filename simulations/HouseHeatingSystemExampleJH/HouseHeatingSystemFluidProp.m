function HouseHeatingSystemFluidProp(hFigure)
% Code to plot fluid property data from HouseHeatingSystem
%% Plot Description:
%
% This figure plots the fluid properties of water as a function of
% pressure and temperature.

% Copyright 2015-2016 The MathWorks, Inc.

% Get fluid properties from Thermal Liquid Settings (TL) block
block = 'HouseHeatingSystem/Thermal Liquid Settings (TL)';
p = str2num(get_param(block, 'p_TLU')); %#ok<*ST2NM>
T = str2num(get_param(block, 'T_TLU'));

% Store fluid proprety tables in cell array
fluidProps = {
    'Density (kg/m^3)',                               str2num(get_param(block, 'rho_TLU'  ));
    'Specific internal energy (kJ/kg)',               str2num(get_param(block, 'u_TLU'    ));
    'Kinematic Viscosity (mm^2/s)',                   str2num(get_param(block, 'nu_TLU'   ));
    'Specific Heat at Constant Pressure (kJ/(kg*K))', str2num(get_param(block, 'cp_TLU'   ));
    'Thermal Conductivity (W/(m*K))',                 str2num(get_param(block, 'k_TLU'    )) .* 1e-3;
    'Isothermal Bulk Modulus (GPa)',                  str2num(get_param(block, 'beta_TLU' ));
    'Isobaric thermal expansion coefficient (1/K)',   str2num(get_param(block, 'alpha_TLU'));
    };

% Prepare figure
figure(hFigure)
clf(hFigure)
set(hFigure, 'Name', 'HouseHeatingSystem: Fluid Properties', 'Toolbar', 'figure')
hAxes = gca;

% Create menu for selecting different fluid properties
hPopup = uicontrol('Style', 'popupmenu', 'String', fluidProps(:,1), ...
    'Units', 'normalized', 'Position', [0.331 0.932, 0.431, 0.05], ...
    'Value', 1, 'Callback', @(hObject, eventData) plotProperties, ...
    'FontWeight', 'bold');

% Plot fluid properties
plotProperties
view(hAxes, -154, 20)


    function plotProperties
        % Nested function to generate the surface plot for the selected
        % fluid property
        idx = get(hPopup, 'Value');
        [az, el] = view(hAxes);
        surf(hAxes, p, T, fluidProps{idx, 2})
        set(gca, 'XScale', 'log')
        view(hAxes, az, el)
        xlabel('Pressure (MPa)')
        ylabel('Temperature (K)')
        zlabel(fluidProps{idx, 1})
    end

end
