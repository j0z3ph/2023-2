# Código 2

Ejemplo de uso de varias funciones de entradas y salidas de datos.

## Introducción

Para el manejo de entradas y salidas, se requiere la siguiente biblioteca de funciones:
```c
#include<stdio.h>
```

Recuerde, el archivo de entrada estándar es `stdin` (teclado) y el de salida `stdout` (pantalla).

## Entradas sin formato
- `getc(stdin)` Obtiene un caracter del archivo especificado.
- `gets(destino)` Obtiene una cadena de caracteres de tamaño indeterminado. **No recomendable**.
- `fgets(destino, tamaño, stdin)` Obtiene una cadena de caracteres de tamaño definido.

## Salida sin formato
- `putc(caracter, stdout)` Imprime un caracter en el archivo especificado.
- `puts(cadena)` Imprime una cadena de caracteres en pantalla.
- `putchar(caracter)` Imprime un caracter en pantalla.

## Entradas con formato
- `scanf(formato, variables...)` Obtiene y convierte una entrada en el formato especificado, depositándolo en la variable proporcionada. Recuerde, las variables se deben especificar con el operador &. 

## Salidas con formato
- `printf(cadena con formato, variables...)` Imprime una cadena de pantalla con el formato especificado, para las variables proporcionadas.

## Especificadores de formato

Tanto con la función `scanf` como `printf`, es posible utilizar los siguientes especificadores de formato.

- `%i`o `%d` Para números enteros.
- `%f` Para números de coma flotante.
- `%lf` Para números de coma flotante de doble precisión (double). 
- `%c` Para un caracter.
- `%s` Para una cadena de caracteres.

Existen otros especificadores de formatos.
