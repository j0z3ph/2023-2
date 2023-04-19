x=-1:0.1:3;
y=1:0.1:4;
C = [0,1,0];
[X,Y]=meshgrid(x,y); %Paso 1
Z=(X.*(Y.^2))./(X.^2 + Y.^2); %Paso 2
subplot(1,2,1);
mesh(X,Y,Z);
title("Grafica de Malla", "FontSize", 20);
subplot(1,2,2);
surf(X,Y,Z);
title("Grafica de Superficie", "FontSize", 20);
