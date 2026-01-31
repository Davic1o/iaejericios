# 2.4 Expresiones y Sentencias de control (ITERATIVAS) (Contextual)

## Planteamiento

Una pequeña tienda necesita gestionar sus ventas diarias para un mes específico. Diseña un programa que permita ingresar las ventas de cada día. La entrada de datos debe finalizar cuando se alcancen 30 días o cuando el usuario ingrese un valor de venta negativo, lo que indicaría que no hay más ventas. Al finalizar, el programa debe reportar el total acumulado de ventas.

## Criterios de Aceptación

El programa debe utilizar una estructura de control iterativa.
Acumula correctamente las ventas diarias.
Termina la lectura de datos si se ingresa un valor de venta negativo.
Termina la lectura de datos si se han procesado 30 días.
Imprime el total de ventas acumulado.

## Entradas

Secuencia de números enteros positivos representando las ventas diarias (uno por línea).
Un número entero negativo para indicar el fin de la entrada de datos antes de los 30 días.

## Salidas

Un número entero que representa el total de ventas acumulado.

## Código de Solución

Download: [solution.c](./solution.c)

```c
#include <stdio.h>

int main() {
    int ventas_diarias;
    int total_ventas = 0;
    int dia_actual = 0;
    const int MAX_DIAS = 30;

    // Loop for reading daily sales
    // Continues as long as sales are positive and max_days is not reached
    while (dia_actual < MAX_DIAS) {
        // Read daily sales
        if (scanf("%d", &ventas_diarias) != 1) {
            // Error reading input or EOF
            break;
        }

        // Check for negative input to stop early
        if (ventas_diarias < 0) {
            break;
        }

        // Accumulate sales
        total_ventas += ventas_diarias;
        dia_actual++; // Increment day counter
    }

    // Print total sales
    printf("%d\n", total_ventas);

    return 0;
}

```

