% promedio.m
% Programa que pide al usuario un conjunto de
% calificaciones y devuelve su promedio
% autor: Jose Luis
% 2023/03/7
% GPLv3

calif = input(['Usuario, proporcione las calificaciones en formato' ...
    'vector: \n']);
prom = mean(calif);
disp('El promedio es:');
disp(prom);