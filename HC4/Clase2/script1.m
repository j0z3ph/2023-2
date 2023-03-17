% script1.m
% Ejemplos de if
% autor: Jose Luis
% 2023-03-16
% GPLv3
clc;
n = input("Proporcione un valor: ");
if n < 0
    fprintf("No es posible calcular el factorial de %i.\n", n);
elseif n > 50
    fprintf("El factorial de %i es MUY GRANDE :O\n", n);
else
    fprintf("El factorial de %i es %i.\n", n, factorial(n));
end