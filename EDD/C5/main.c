#include "cola.h"

int main()
{
    Cola *cola = (Cola *)malloc(sizeof(Cola));
    init(cola);
    int val = 0, prio = 0;
    printf("Formato: prioridad-valor\n");
    while (prio != -1)
    {
        scanf("%i-%i", &prio, &val);
        add(cola, val, prio);
    }
    print(cola);
    val = 0;
    while ((val = peek(cola)) != ERROR)
    {
        printf("%i ", val);
    }

    return 0;
}
