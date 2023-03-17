% script3.m
% Ejemplo de while
% autor: Jose Luis
% 2023-03-16
% GPLv3

clc;
n = input("Que tabla quieres? ");
k = 1;
while k <= 10 
    fprintf("%i x %i = %i\n", n, k, n*k);
    k = k + 1;
end