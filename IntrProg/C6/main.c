#include<stdio.h>

int main()
{
    int opcion = 0;

    printf("MENU\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");
    printf("5. Salir\n");

    printf("Seleccione una opcion: ");
    scanf("%i", &opcion);

    switch (opcion)
    {
    case 1: //suma
        printf("SUMA\n");
        break;
    case 2: //resta
        printf("RESTA\n");
        break;
    case 3: //mul
        printf("MULTIPLICACION\n");
        break;
    case 4: // div
        printf("DIVISION\n");
        break;
    case 5: //salir
        printf("Byte\n");
        break;
    default:
        printf("Opcion no valida :(");
        //break;
    }





    /*if(anios <= 0) {
        printf("No manches, eso que...");
    } else if(anios < 18) {
        if(anios >0 && anios < 10) {
            printf("Hola mocoso");
        } else if(anios >=10 && anios <15) {
            printf("Hola puberto precoz");
        } else {
            printf("Hola adulto joven");
        }
        
    } else {
        printf("Hola Don");
    }*/


    
    return 0;
}
