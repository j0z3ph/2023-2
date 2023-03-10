% script1.m
% Solicitar numeros e imprimir promedio
% autor: Jose Luis
% 2023/03/10

clc;
valores = input('Proporcione valores en formato vector: ');
prom = mean(valores);
fprintf('El promedio es: %10.3f\n', prom);