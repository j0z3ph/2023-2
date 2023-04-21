x=linspace(-3,3,100);
y=linspace(-3,3,100);
% Paso 1
[X,Y]=meshgrid(x,y);

% Paso 2
Z=1.8.^(-1.5*sqrt(X.^2+Y.^2)).*sin(X).*cos(0.5*Y);

% Paso 3
% Malla
mesh(X,Y,Z);

%Superficie
surf(X,Y,Z, "EdgeColor","none");

meshz(X,Y,Z);

meshc(X,Y,Z);

surfc(X,Y,Z);

surfl(X,Y,Z);

waterfall(X,Y,Z);

contour3(X,Y,Z,30);

contour(X,Y,Z,30);
