# 2.4 Expresiones y Sentencias de control (ITERATIVAS) (Procedimental)

## Planteamiento

Desarrolla un programa en C que solicite al usuario un número entero no negativo 'N'. El programa debe calcular y mostrar la suma de todos los números enteros desde 1 hasta 'N' (si 'N' es 0, la suma es 0) utilizando una estructura de control iterativa.

## Criterios de Aceptación

El programa calcula la suma de números enteros desde 1 hasta N.
Utiliza una sentencia de control iterativa (bucle).
Maneja correctamente el caso de N igual a 0.

## Entradas

Un número entero no negativo N.

## Salidas

La suma total de los números desde 1 hasta N.

## Código de Solución

Download: [solution.py](./solution.py)

```python
#include <stdio.h>

int main() {
    int N;
    int sum = 0;

    // Leer el número N desde la entrada estándar
    scanf("%d", &N);

    // Asegurarse de que N no sea negativo para la lógica de suma, aunque el problema
    // lo define como 'no negativo'. Si N es negativo, la suma es 0.
    if (N < 0) {
        sum = 0;
    } else {
        // Calcular la suma utilizando un bucle for
        for (int i = 1; i <= N; i++) {
            sum += i;
        }
    }

    // Imprimir el resultado seguido de un salto de línea
    printf("%d\n", sum);

    return 0;
}
```

