% script3.m
% Programa que pide al usuario un numero y devuelve su raiz quita.
% autor: Jose Luis
% 2023/03/7
% GPLv3

n = input(['Usuario, por favor, escriba \nun valor entero positivo ' ...
    'mayor a cero: ']);
disp('La raiz quinta es: ');
disp(nthroot(n, 5));