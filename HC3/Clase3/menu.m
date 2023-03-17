% menu.m
% Menu
% autor Jose Luis
% 2023-03-17
opcion = 0;
while opcion ~= 3 
    clc;
    fprintf("MENU\n\t1. Opcion 1\n\t2. Opcion 2\n\t3. Salir\n" + ...
        "Seleccione una opcion: ");
    opcion = input('');
    
    switch opcion
        case 1
            fprintf("Selecciono la opcion %i\n", opcion);
        case 2
            fprintf("Selecciono la opcion %i\n", opcion);
        case 3
            fprintf("Adios :'(\n");
        otherwise
            fprintf("Opcion no valida >:|\n");
    end
    if opcion ~= 3
        input('Precione ENTER para continua...');
    else
        input('Precione ENTER para salir');
    end
end
