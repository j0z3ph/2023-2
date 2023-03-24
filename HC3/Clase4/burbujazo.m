function [ordenado] = burbujazo(desordenado)
% BURBUJAZO Realiza el metodo de la burbuja

n = length(desordenado);
for k=1:n
    for l=1:n-k
        if(desordenado(l) > desordenado(l+1))
            aux = desordenado(l);
            desordenado(l) = desordenado(l+1);
            desordenado(l+1) = aux;
        end
    end
end

ordenado = desordenado;
end