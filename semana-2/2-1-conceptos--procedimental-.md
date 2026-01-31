# 2.1 Conceptos (Procedimental)

## Planteamiento

Desarrolla un programa en C que solicite al usuario ingresar dos números enteros, realice la suma de ambos y muestre el resultado por pantalla. Asegúrate de declarar las variables con el tipo de dato adecuado.

## Criterios de Aceptación

El programa debe leer correctamente dos números enteros.
Debe calcular la suma de los números ingresados.
El resultado de la suma debe ser mostrado en la salida estándar.

## Entradas

Dos números enteros separados por un salto de línea.

## Salidas

La suma de los dos números ingresados.

## Código de Solución

Download: [solution.c](./solution.c)

```c
#include <stdio.h>

int main() {
    int num1, num2, suma;

    // Solicitar al usuario el primer numero
    printf("Ingrese el primer numero entero: ");
    scanf("%d", &num1);

    // Solicitar al usuario el segundo numero
    printf("Ingrese el segundo numero entero: ");
    scanf("%d", &num2);

    // Realizar la suma
    suma = num1 + num2;

    // Mostrar el resultado
    printf("%d\n", suma);

    return 0;
}
```

