
#define true 1
#define false 0

/**
 * @brief Busqueda binaria
 * 
 * @param arr Arreglo de datos ordenados
 * @param tam Tamnio del arreglo
 * @param lost Valor a buscar
 * @return int 1 si lo encuentra, 0 si no lo encuentra
 */
int busquedaB(int arr[], int tam, int lost)
{
    int min = 0;
    int max = tam - 1;
    int med = 0;
    while(min <= max) {
        printf(".");
        med = ((max - min) / 2) + min;
        if(arr[med] == lost) {
            return true;
        } else {
            if(lost > arr[med]) {
                min = med + 1;
            } else {
                max = med - 1;
            }
        }
    }
    return false;
}

/**
 * @brief Imprime un arreglo de tamanio N
 *
 * @param arr El arreglo a imprimir
 * @param tam N
 */
void imprime(int arr[], int tam)
{
    // Imprime el arreglo final
    printf("[ ");
    for (int i = 0; i < tam; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("]\n");
}

/**
 * @brief Aplica el algoritmo de la burbuja en un
 * arreglo de tamanio n
 *
 * @param arr El arreglo
 * @param tam n
 */
void burbujazo(int arr[], int tam)
{
    int interambio = false, aux;
    for (int i = 0; i < tam; i++)
    {
        interambio = false;
        for (int j = 0; j < tam - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
                interambio = true;
            }
        }
        if (!interambio)
            break;
    }
}