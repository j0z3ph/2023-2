/**
 * @file main.c
 * @author Jose Luis
 * @brief Ejemplo de estructuras
 * @version 0.1
 * @date 2023-05-12
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef int Entero;

struct Fecha
{
    Entero dia;
    int mes;
    int anio;
};

typedef struct Fecha Fecha;

struct Contacto
{
    char nombre[20];
    char aPaterno[20];
    char aMaterno[20];
    char apodo[20];
    char telefono[11];
    Fecha fnacimiento;
};

typedef struct Contacto Contacto;

void imprime(Contacto c)
{
    printf("-----------\n%s\n%s %s %s\n%s\n%i-%i-%i\n",
           c.apodo, c.aPaterno, c.aMaterno, c.nombre, c.telefono,
           c.fnacimiento.dia,
           c.fnacimiento.mes, c.fnacimiento.anio);
}

void arreglaCadena(char cadena[])
{
    cadena[strlen(cadena) - 1] = '\0';
}

int main()
{
    Contacto *listaContactos = (Contacto *)malloc(sizeof(Contacto));
    Entero cont = 0;
    char resp = 's';

    while (resp != 'n')
    {
        fflush(stdin);
        printf("Proporcione el Nombre: ");
        fgets((listaContactos + cont)->nombre, 20, stdin);
        arreglaCadena(listaContactos[cont].nombre);
        printf("Proporcione el Apellido Paterno: ");
        fgets((listaContactos + cont)->aPaterno, 20, stdin);
        arreglaCadena(listaContactos[cont].aPaterno);
        printf("Proporcione el Apellido Materno: ");
        fgets((listaContactos + cont)->aMaterno, 20, stdin);
        arreglaCadena(listaContactos[cont].aMaterno);
        printf("Proporcione el Apodo: ");
        fgets((listaContactos + cont)->apodo, 20, stdin);
        arreglaCadena(listaContactos[cont].apodo);
        printf("Proporcione el Numero de Telefono: ");
        fgets((listaContactos + cont)->telefono, 11, stdin);
        arreglaCadena(listaContactos[cont].telefono);

        printf("Proporcione la fecha de nacimiento en formato dd-mm-aaaa: ");
        scanf("%i-%i-%i", &listaContactos[cont].fnacimiento.dia,
              &listaContactos[cont].fnacimiento.mes,
              &listaContactos[cont].fnacimiento.anio);
        getc(stdin);
        printf("Agregar otro?[s/n] ");
        resp = getc(stdin);
        if (resp != 'n')
        {
            cont++;
            listaContactos = (Contacto *)realloc(listaContactos, sizeof(Contacto) * (cont + 1));
        }
    }

    for (int i = 0; i <= cont; i++)
    {
        imprime(listaContactos[i]);
    }
    return 0;
}
