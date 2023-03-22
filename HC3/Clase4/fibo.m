function [f] = fibo(n)
% FIBO Retorna la sucesion de fibonacci

if n <= 0 
    f = 0;
else
    f = zeros(1, n);
    if n >= 1
        f(1) = 1;
    end
    if n >= 2
        f(2) = 1;
    end
    if n>=3
        for k=3:1:n
            f(k) = f(k-1) + f(k-2);
        end
    end
end

end