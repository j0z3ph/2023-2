/**
 * @file estructuras.c
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-02-24
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#define False 0
#define True 1

int main()
{
    int opcion = 0;

    do
    {
        printf("MENU\n\t1. Opcion1\n\t2. Opcion 2\n\t3. Salir\nPresione el numero de la opcion que desea: ");
        scanf("%d", &opcion);
        getc(stdin);
        switch (opcion)
        {
        case 1:
            printf("Selecciono la opcion 1\n");
            break;
        case 2:
            printf("Selecciono la opcion 2\n");
            break;
        case 3:
            printf("Y se marcho\n");
            break;
        default:
            printf("Opcion no valida\n");
            break;
        }
        printf("Presione enter para %s...", opcion == 3 ? "salir" : "volver al menu");
        getc(stdin);
    } while (opcion != 3);



    /*while (opcion != 3)
    {
        printf("MENU\n\t1. Opcion1\n\t2. Opcion 2\n\t3. Salir\nPresione el numero de la opcion que desea: ");
        scanf("%d", &opcion);
        getc(stdin);
        switch (opcion)
        {
        case 1:
            printf("Selecciono la opcion 1\n");
            break;
        case 2:
            printf("Selecciono la opcion 2\n");
            break;
        case 3:
            printf("Y se marcho\n");
            break;
        default:
            printf("Opcion no valida\n");
            break;
        }
        printf("Presione enter para %s...", opcion == 3 ? "salir" : "volver al menu");
        getc(stdin);
    }*/

    /*if(opcion == 1) {
        printf("Selecciono la opcion 1\n");
    } else if(opcion == 2) {
        printf("Selecciono la opcion 2\n");
    } else if(opcion == 3) {
        printf("Y se marcho\n");
    } else {
        printf("Opcion no valida\n");
    }*/

    return 0;
}
