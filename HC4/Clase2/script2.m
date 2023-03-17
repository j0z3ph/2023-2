% script2.m
% Ejemplo de switch
% autor: Jose Luis
% 2023-03-16
% GPLv3
n=0;
while n ~= 4
    clc;
    fprintf("MENU\n\t1. Opcion 1\n\t2. Opcion 2\n\t3. Opcion 3" + ...
        "\n\t4. Salir\n");
    n = input("Seleccione una opcion: ");
    switch n
        case 1
            fprintf("Selecciono la opcion %i\n", n);
        case 2
            fprintf("Selecciono la opcion %i\n", n);
        case 3
            fprintf("Selecciono la opcion %i\n", n);
        case 4
            fprintf("ADIOS :'(\n");
        otherwise
            fprintf("Opcion no valida >:|\n");
    end
    if n ~= 4
        input("Presione ENTER para continuar... ");
    end
end
