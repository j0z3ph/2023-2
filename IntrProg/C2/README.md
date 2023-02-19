# Código 2

Ejemplo de uso de varias funciones de entradas y salidas de datos.

## Introducción

Para el manejo de entradas y salidas, se requiere la siguiente biblioteca de funciones:
```c
#include<stdio.h>
```

Recuerde, el archivo de entrada es `stdin` y el de salida `stdout`.

## Entradas sin formato
- `getc(stdin)` Obtiene un caracter del teclado.
- `gets(destino)` Obtiene una cadena de caracteres de tamaño indeterminado. **No recomendable**.
- `fgets(destino, tamaño, stdin)` Obtiene una cadena de caracteres de tamaño definido.

## Salida sin formato
