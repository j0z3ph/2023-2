t=linspace(0,6*pi,1000);
x=sqrt(t).*sin(2*t);
y=sqrt(t).*cos(2*t);
z=0.5*t;

plot3(x,y,z,'r','LineWidth', 5);
grid on;
title("Grafica de linea", 'FontSize', 20);
xlabel("Eje X");
ylabel("Eje Y");
zlabel("Eje Z");