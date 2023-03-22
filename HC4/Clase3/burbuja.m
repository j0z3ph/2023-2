function [o] = burbuja(d)
%BURBUJA Metodo de la burbuja

n = length(d);
for i=1:1:n
    for j=1:1:n-i
        if d(j) < d(j+1)
            aux = d(j);
            d(j) = d(j+1);
            d(j+1) = aux;
        end
    end
end
o = d;
end