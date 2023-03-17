clc;
a=2.33;
t=3:3:600;
v=a*t;
d=(0.5)*a*t.*t;
fid = fopen("archivo.txt", "w");
fprintf(fid,"Tiempo - Velocidad - Distancia\n");
fprintf(fid,"%4.2f %10.2f %10.2f\n", [t;v;d]);
fclose(fid);