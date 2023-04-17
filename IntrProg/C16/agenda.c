/**
 * @file agenda.c
 * @author Yo merengues
 * @brief Agenda telefonica
 * @version 0.1
 * @date 2023-04-17
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <string.h>
#include "tools.h"
#define FILAS 10
#define NCOL 51
#define TCOL 11

int main()
{
    char nombres[FILAS][NCOL], telefonos[FILAS][TCOL];
    char *menu[3] = {"Agregar contacto", "Ver contactos", "Salir"};
    int cont = 0, opc = 0;
    for (int i = 0; i < FILAS; i++)
    {
        nombres[i][0] = '\0';
        telefonos[i][0] = '\0';
    }

    while (opc != 2)
    {
        opc = showMenu(3, menu, "LA AGENDA");
        switch (opc)
        {
        case 0:
            if(cont >= FILAS) {
                printf("Agenda llena :'(");
                break;
            } 
            printf("Escriba el nombre del contacto: ");
            fgets(nombres[cont], NCOL, stdin);
            printf("Escriba el telefono a 10 digitos: ");
            fgets(telefonos[cont], TCOL, stdin);
            nombres[cont][strlen(nombres[cont]) - 1] = '\0';
            telefonos[cont][strlen(telefonos[cont]) - 1] = '\0';
            cont++;
            break;

        case 1:
            printf("CONTACTOS\n\n");
            for (int i = 0; i < FILAS; i++)
            {
                if(strlen(nombres[i]) == 0) {
                    break;
                }
                printf("%i. %s - %s\n", i+1, nombres[i], telefonos[i]);
            }
            getc(stdin);
            break;

        case 2:
            clear();
            printf("Byte\n");
            break;
        default:
            clear();
            printf("Opcion no valida. Enter para continuar...");
            getc(stdin);
            break;
        }
    }

    return 0;
}
