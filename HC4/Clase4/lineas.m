t=linspace(0,2*pi,500);
x=sqrt(t) .* sin(2*t);
y=sqrt(t) .* cos(2*t);
z=0.5*t;

plot3(x,y,z,'r', 'LineWidth', 10);
grid on;
xlabel("Eje X");
ylabel("Eje Y");
zlabel("Eje Z");
