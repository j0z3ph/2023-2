% AX=C
clc;
A = input("Proporcione la matriz A: ");
C = input("Proporcione el vector de resultados C: ");
X = C/A';
format rat;
disp("La solucion del sistema es:");
disp(X);
format default;
com = X*A';