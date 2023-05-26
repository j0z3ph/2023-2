clear;
puntos=randi(100,1000,2);
[idx, centroids] = kmeans(puntos,10);
figure
hold on;
n = length(centroids);
for k=1:n
    g = puntos(idx==k,:);
    cv = convhull(g);
    color=rand(1,3);
    patch(g(cv,1),g(cv,2),color);
end
plot(puntos(:,1), puntos(:,2),'k.');
plot(centroids(:,1), centroids(:,2),'w+', MarkerSize=20);

hold off;