# 4.3 Arreglos unidimensionales y bidimensionales (Vectores) (Procedimental)

## Planteamiento

Escribe un programa en C que lea una secuencia de números enteros y determine cuál es el valor máximo presente en ella. El programa debe manejar un número predefinido de elementos para el arreglo unidimensional (vector).

## Criterios de Aceptación

El programa debe encontrar correctamente el valor máximo en cualquier secuencia de enteros.
Debe manejar arreglos de al menos 1 elemento.

## Entradas

Una línea conteniendo el tamaño N del arreglo.
N números enteros separados por espacios en una segunda línea.

## Salidas

Un único número entero, que es el valor máximo encontrado en el arreglo.

## Casos de Prueba

```text
5
10 2 8 15 3 -> 15
4
-5 -1 -10 -2 -> -1
6
-10 0 5 1 20 -3 -> 20
1
42 -> 42
3
7 7 7 -> 7
```

## Código de Solución

**Archivo de solución:** [4_3_arreglos_unidimensionales_y_bidimensionales_ve.c](./4_3_arreglos_unidimensionales_y_bidimensionales_ve.c)

```c
#include <stdio.h>
#include <limits.h> // Para INT_MIN

int main() {
    int n;
    // Leer el tamaño del arreglo
    if (scanf("%d", &n) != 1 || n <= 0) {
        // Manejo de error básico o suposición de entrada válida
        return 1; 
    }

    int arr[n]; // Arreglo de longitud variable (C99 VLA)
    int max_val = INT_MIN; // Inicializar con el valor entero más pequeño posible

    // Leer los elementos del arreglo y encontrar el máximo
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            // Error al leer un elemento
            return 1;
        }
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }

    // Imprimir el valor máximo encontrado
    printf("%d\n", max_val);

    return 0;
}
```

