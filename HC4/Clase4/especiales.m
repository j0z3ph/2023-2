%[x,y,z] = sphere(50);
%mesh(x,y,sin(2*z) + cos(2*z));

t=linspace(0,pi,20);
r=1+sin(t);
[x,y,z]=cylinder(r);
surf(x,y,z);
axis square;

%barras
Y=[16.57;267;35.57;457;347;237;127];bar3(Y);

%tallo
x=0:0.2:10;y=sin(x);z=x.^1.5;stem3(x,y,z, "filled")

%dispersion
x=0:0.2:10;y=sin(x);z=x.^1.5;scatter3(x,y,z,"filled");grid on;
colormap("parula");

%pastel
X=[5,9,14,20];explode=[0,1,1,0];
pie3(X,explode);



