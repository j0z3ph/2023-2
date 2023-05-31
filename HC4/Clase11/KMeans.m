puntos = randi(100,1000,2);
[idx,centroides]=kmeans(puntos,10);
hold on;
for k=1:length(centroides)
    pc = puntos(idx==k,:);
    cv = convhull(pc);
    color = rand(1,3);
    patch(pc(cv,1),pc(cv,2),color);
end
plot(puntos(:,1), puntos(:,2), "k.");
plot(centroides(:,1), centroides(:,2), "w+", MarkerSize=10);

hold off;