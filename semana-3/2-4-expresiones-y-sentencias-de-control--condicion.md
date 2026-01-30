# 2.4 Expresiones y Sentencias de control (CONDICIONALES) (Procedimental)

## Planteamiento

Desarrolla un programa en C que lea un número entero y determine si es positivo, negativo o cero, imprimiendo el resultado correspondiente.

## Entradas

Un número entero (ej. -5, 0, 10).

## Salidas

El texto 'El número es positivo.', 'El número es negativo.' o 'El número es cero.', según corresponda.

## Código de Solución

Download: [solution.txt](./solution.txt)

```text
#include <stdio.h>

int main() {
    int numero;
    scanf("%d", &numero);

    if (numero > 0) {
        printf("El número es positivo.\n");
    } else if (numero < 0) {
        printf("El número es negativo.\n");
    } else {
        printf("El número es cero.\n");
    }

    return 0;
}
```

