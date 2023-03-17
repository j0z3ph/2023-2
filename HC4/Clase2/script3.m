% script3.m
% Ejemplo de for
% autor: Jose Luis
% 2023-03-16
% GPLv3

clc;
n = input("Que tabla quieres? ");
for k = 1:1:10 
    fprintf("%i x %i = %i\n", n, k, n*k);
end