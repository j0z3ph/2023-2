/**
 * @file main.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Segundo programa
 * @version 0.1
 * @date 2023-02-17
 *
 * @copyright GPL v3
 *
 */
#include <stdio.h>
#define PI 3.1416


int main(int argc, char const *argv[])
{
    // putc('A', stdout);
    // puts("Hole e todes");
    // putchar('^');

    // putc('A', stdout); // Imprime en pantalla la letra A

    /*char a;
    puts("Por favor, presiona un tecla, y despues da enter: ");
    a = getc(stdin);
    putc(a, stdout);
    */
    /*char cadena[10];
    fgets(cadena,10, stdin);

    puts(cadena);*/

    int var = 0;
    //const float PI = 3.1416;
    int edad, anio, semestre;
    printf("Usuario, por favor, proporciona tu edad: ");
    scanf("%d", &edad);

    edad = edad + 20;

    printf("Dentro de 20 anios, vas a tener %i", edad);

    printf("\nAhora, escriba su semestre en el formato AA-S: ");
    scanf("%d-%d", &anio, &semestre);
    printf("Anio: %d, Semestre: %i", anio, semestre);

    return 0;
}
