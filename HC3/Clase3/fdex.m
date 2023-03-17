function res = fdex(x)
%FDEX Calcula un formula rara que no conozco
% Entradas:
%   x - Un escalar o un vector
% Salidas:
%   res - El resultado de la operacion (escalar o vector)

res = ((x.^4) .* sqrt(3*x+5))./(((x.^2) + 1).^2);
end