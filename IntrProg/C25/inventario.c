/**
 * @file inventario.c
 * @author Jose Luis
 * @brief Lista de inventario
 * @version 0.1
 * @date 2023-05-26
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Producto
{
    int ID;
    char nombre[50];
    char desc[100];
    float precio;
    int existencia;
};

typedef struct Producto Producto;

void clear()
{
#if __WIN32__
    system("cls");
#else
    system("clear");
#endif
}

int main()
{
    FILE *bd;
    Producto prod, prodtemp;
    const char *dbName = "inventario.bin";
    int resp;

    bd = fopen(dbName, "r");
    if (bd == NULL)
    {
        bd = fopen(dbName, "w");
        if (bd == NULL)
        {
            printf("No fue posible acceder a la base de datos :c\nBye\n");
            return 1;
        }
        fclose(bd);
    }

    do
    {
        clear();

        printf("Zorrillo Abarrotero\n1. Registrar\n2. Actualizar\n3. Ver\n4. Salir\nSeleccione una opcion: ");
        scanf("%i", &resp);

        switch (resp)
        {
        case 1:
            clear();
            printf("ID: ");
            scanf("%i", &prod.ID);
            getc(stdin);
            printf("Nombre: ");
            fgets(prod.nombre, 50, stdin);
            prod.nombre[strlen(prod.nombre) - 1] = '\0';
            printf("Descripcion: ");
            fgets(prod.desc, 100, stdin);
            prod.desc[strlen(prod.desc) - 1] = '\0';
            printf("Precio: ");
            scanf("%f", &prod.precio);
            getc(stdin);
            printf("Existencia: ");
            scanf("%i", &prod.existencia);
            getc(stdin);
            bd = fopen(dbName, "r+");
            fseek(bd, (prod.ID - 1) * sizeof(prod), SEEK_SET);
            fwrite(&prod, sizeof(prod), 1, bd);
            fclose(bd);
            break;
        case 2:
            clear();
            printf("ID del producto: ");
            scanf("%i", &prod.ID);
            getc(stdin);
            bd = fopen(dbName, "r");
            fseek(bd, (prod.ID - 1) * sizeof(prod), SEEK_SET);
            fread(&prod, sizeof(prod), 1, bd);
            fclose(bd);
            if (prod.ID == 0)
            {
                printf("El producto no existe >:\\\n");
            }
            else
            {
                printf("Nombre [%s]: ", prod.nombre);
                fgets(prodtemp.nombre, 50, stdin);
                prodtemp.nombre[strlen(prodtemp.nombre) - 1] = '\0';
                if (strlen(prodtemp.nombre) != 0)
                {
                    strcpy(prod.nombre, prodtemp.nombre);
                }
                printf("Descripcion [%s]: ", prod.desc);
                fgets(prodtemp.desc, 100, stdin);
                prodtemp.desc[strlen(prodtemp.desc) - 1] = '\0';
                if (strlen(prodtemp.desc) != 0)
                {
                    strcpy(prod.desc, prodtemp.desc);
                }
                printf("Precio [%.2f]: ", prod.precio);
                scanf("%s", prodtemp.desc);
                getc(stdin);
                if (strlen(prodtemp.desc) != 0)
                {
                    prod.precio = atof(prodtemp.desc);
                }
                printf("Existencia [%i]: ", prod.existencia);
                scanf("%s", prodtemp.desc);
                getc(stdin);
                if (strlen(prodtemp.desc) != 0)
                {
                    prod.existencia = atoi(prodtemp.desc);
                }
                bd = fopen(dbName, "r+");
                fseek(bd, (prod.ID - 1) * sizeof(prod), SEEK_SET);
                fwrite(&prod, sizeof(prod), 1, bd);
                fclose(bd);
            }

            printf("Presione una tecla para continuar...");
            getc(stdin);
            break;
        case 3:
            clear();
            printf("ID del producto: ");
            scanf("%i", &prod.ID);
            getc(stdin);
            bd = fopen(dbName, "r");
            fseek(bd, (prod.ID - 1) * sizeof(prod), SEEK_SET);
            fread(&prod, sizeof(prod), 1, bd);
            fclose(bd);
            if (prod.ID == 0)
            {
                printf("El producto no existe >:\\\n");
            }
            else
            {
                printf("Nombre: %s\n", prod.nombre);
                printf("Descripcion: %s\n", prod.desc);
                printf("Precio: $%.2f\n", prod.precio);
                printf("Existencia: %i\n", prod.existencia);
            }
            printf("Presione una tecla para continuar...");
            getc(stdin);
            break;
        default:
            break;
        }

    } while (resp != 4);

    return 0;
}
