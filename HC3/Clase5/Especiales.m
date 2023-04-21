[x, y, z] = sphere(20); 
surf(x,y,z);


t=linspace(0,pi,20);r=1+sin(t);[x,y,z]=cylinder(r);surf(x,y,z);axis square;

Y=[16.57;267;35.57;457;347;237;127];bar3(Y);

x=0:0.2:10;y=sin(x);z=x.^1.5;stem3(x,y,x,'fill');

x=0:0.2:10;y=sin(x);z=x.^1.5;scatter3(x,y,x,'filled');

X=[5,9,14,20];explode=[1,0,1,0];pie3(X,explode);





