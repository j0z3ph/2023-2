clear;
k = 8;
numbers = randi(100,10000,2);
[IDX,ctrs] = kmeans(numbers,k);
n = length(ctrs);
hold on;
for i=1:n
    r = numbers(IDX==i,:);
    ch = convhull(r(:,1),r(:,2)); %convex hull
    color = rand(1,3);
    patch(r(ch,1),r(ch,2),color);
    scatter(r(:,1),r(:,2),30,'k','.');
end
plot(ctrs(:,1),ctrs(:,2),'wx',...
    'MarkerSize',12,'LineWidth',2)
hold off;