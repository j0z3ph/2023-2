%graficas ejercicio 7
%vera landeros quenan tadeo 
%de -2pi <= x <= 2pi
% 3x sin(x)−2x
clear;
clc;
%grafica
%inicializacion del vector 
x = linspace(-2*pi, 2*pi, 100);
%elementos a valor de y
y1 = 3.*x.*sin(x)-2.*x;
%derivada 
dx = x(2)-x(1); % distancia 
y2 = diff(y1)/dx; 
%grafica
plot(x, y1, 'r','LineWidth', 2);
hold on;
plot(x,y2, 'g--','LineWidth', 2); %derivada
title('Grafica de la funcion -pi <= x <= 2pi');
legend('y1 = 3x sin(x)−2x', 'y2 = d(x) 3x sin(x)−2x');
xlabel('x');
ylabel('y');
grid on;
hold off;