% multiplicaciones.m
% Multiplicaciones
% autor Jose Luis
% 2023-03-17

clc;
clear;
n = input("Proporcione un numero: ");
k = 1;
while k <= 10
    fprintf("%i x %i = %i\n", n, k, n*k);
    k = k + 1;
end