/**
 * @file main.c
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * @brief Lista Ligada
 * @version 0.1
 * @date 2023-02-20
 *
 * @copyright GPL v3
 *
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Estrutura Nodo
 * Contiene un valor entero y un
 * apuntador al siguiente nodo
 */
typedef struct Nodo
{
    int value;
    struct Nodo *next;
} Nodo;

/**
 * @brief Estructura lista
 * Contiene la referencia al nodo inicial
 * aka HEAD
 */
typedef struct List
{
    Nodo *head;
    Nodo *tail;
} List;


/**
 * @brief Busca un nodo con el valor indicado
 * 
 * @param list Lista ligada
 * @param val Valor del nodo buscado
 * @return Nodo* Nodo encontrado o NULL si no se encuentra
 */
Nodo* find(List *list, int val) {
    Nodo *current = list->head;
    while (current != NULL) {
        if (current->value == val)
            break;
        current = current->next;
    }
    return current;
}

/**
 * @brief Agrega un nodo en la posición indicada
 * 
 * @param list Lista ligada
 * @param val Valor del nuevo nodo
 * @param index Indice donde se desea agregar
 * @return int 0 si la operación se ejecuta correcta.
 * 1 Si se proporciona un numero negativo.
 * 2 Si el indice es mayor al numero de elementos en la lista.
 */
int addAt(List *list, int val, int index) {
    if(index < 0) {
        return 1;
    }
    if(index == 0) {
        Nodo *nodo = (Nodo *)malloc(sizeof(Nodo));
        nodo->value = val;
        nodo->next = list->head;
        list->head = nodo;
    } else {
        Nodo *current = list->head;
        int cont = 1;
        while (current != NULL) {
            if (cont == index) {
                Nodo *nodo = (Nodo *)malloc(sizeof(Nodo));
                nodo->value = val;
                nodo->next = current->next;
                current->next = nodo;
                break;
            }
            cont++;
            current = current->next;
        }
        if(current == NULL) return 2;
    }
    return 0;
}

/**
 * @brief Agrega un elemento al final de la lista.
 * 
 * @param list Lista enlazada
 * @param val Valor del nuevo nodo
 */
void add(List *list, int val)
{
    // Caso 1
    Nodo *nodo = (Nodo *)malloc(sizeof(Nodo));
    nodo->value = val;
    nodo->next = NULL;
    if (list->head == NULL)
    {
        // Lista vacia
        list->head = nodo;
        list->tail = nodo;
    }
    else
    { // Caso  2
        // Lista con al menos un elemento
        list->tail->next = nodo;
        list->tail = list->tail->next;
    }
}

/**
 * @brief Imprime en pantalla el contenido de la lista
 * 
 * @param list Lista enlazada
 */
void print(List *list)
{
    Nodo *current = list->head;
    while (current != NULL)
    {
        printf("%i -> ", current->value);
        current = current->next;
    }
    printf("NULL");
}

/**
 * @brief Función principal
 * 
 * @return int 
 */
int main()
{
    List *lista = (List*) malloc(sizeof(List));
    char resp;
    int val, idx;
    do{
        printf("Ingrese un entero: ");
        scanf("%i", &val);
        getc(stdin);
        add(lista, val);
        printf("Agregar otro?[s/n] ");
        resp = getc(stdin);
    } while(resp != 'n' && resp != 'N');
    printf("Proporcione el valor a buscar: ");
    scanf("%i", &val);
    if (find(lista, val) != NULL)
        printf("Econtrado :D\n");
    else
        printf("No Econtrado :(\n");

    do {
        printf("Proporcione un numero: ");
        scanf("%i", &val);
        printf("Proporcione el indice: ");
        scanf("%i", &idx);
        val = addAt(lista, val, idx);
        if(val == 1) printf("No se permiten indices negativos\n");
        if(val == 2) printf("Indice incorrecto. Mayor al numero de elementos.\n");
        printf("Agregar otro?[s/n] ");
        getc(stdin);
        resp = getc(stdin);
    } while (resp != 'n' && resp != 'N');
    print(lista);
    return 0;
}
