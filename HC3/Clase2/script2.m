% script2.m
% Raices de vectores
% autor: Jose Luis
% 2023/03/10

clc;
clear;
vector = 1:20;
raices = sqrt(vector);
raices3 = nthroot(vector,3);
raices4 = nthroot(vector,4);
res = [raices;raices3;raices4];

fid = fopen('tabla.txt', 'w');
fprintf(fid, 'Raiz2   Raiz3   Raiz4\n');
fprintf(fid, '%5.2f %7.2f %7.2f\n', res);
fclose(fid);
