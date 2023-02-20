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
} List;

Nodo *last(List *list)
{
    Nodo *current = list->head;
    while (current != NULL && current->next != NULL)
    {
        current = current->next;
    }
    return current;
}

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
    }
    else
    { // Caso  2
        // Lista con al menos un elemento
        Nodo *ultimo = last(list);
        ultimo->next = nodo;
    }
}

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

int main(int argc, char const *argv[])
{
    List *lista = (List*) malloc(sizeof(List));
    char resp;
    int val;
    do{
        printf("Ingrese un entero: ");
        scanf("%i", &val);
        getc(stdin);
        add(lista, val);
        printf("Agregar otro?[s/n] ");
        resp = getc(stdin);
    } while(resp != 'n' && resp != 'N');
    print(lista);
    return 0;
}
