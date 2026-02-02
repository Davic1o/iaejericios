# 4.3 Arreglos unidimensionales y bidimensionales (Vectores) (Procedimental)

## Planteamiento

Desarrolla un programa en C que lea las dimensiones (filas N y columnas M) de una matriz de enteros, seguido de sus N*M elementos. El programa debe calcular y mostrar la suma de todos los elementos de la matriz.

## Criterios de Aceptación

El programa debe compilar correctamente.
El resultado debe ser la suma exacta de todos los elementos de la matriz.

## Entradas

Dos enteros, N y M, que representan las filas y columnas de la matriz.
N*M enteros para los elementos de la matriz, leídos fila por fila.

## Salidas

Un único entero que representa la suma total de todos los elementos de la matriz.

## Casos de Prueba

```text
2 2
1 2
3 4
-> 10
3 1
5
10
15
-> 30
1 3
10 20 30
-> 60
2 3
-1 2 3
4 5 -6
-> 7
```

## Código de Solución

**Archivo de solución:** [4_3_arreglos_unidimensionales_y_bidimensionales_ve.c](./4_3_arreglos_unidimensionales_y_bidimensionales_ve.c)

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M;

    // Leer las dimensiones de la matriz
    if (scanf("%d %d", &N, &M) != 2) {
        fprintf(stderr, "Error: No se pudieron leer las dimensiones N y M.\n");
        return 1; 
    }

    // Validar dimensiones (evitar tamaños excesivamente grandes o inválidos)
    if (N <= 0 || M <= 0 || N > 1000 || M > 1000) { 
        fprintf(stderr, "Error: Dimensiones de matriz inválidas (N, M deben ser > 0 y <= 1000).\n");
        return 1;
    }

    // Asignación dinámica de memoria para la matriz
    int **matriz;
    matriz = (int **) malloc(N * sizeof(int *));
    if (matriz == NULL) {
        fprintf(stderr, "Error: No se pudo asignar memoria para las filas de la matriz.\n");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        matriz[i] = (int *) malloc(M * sizeof(int));
        if (matriz[i] == NULL) {
            fprintf(stderr, "Error: No se pudo asignar memoria para la columna %d de la matriz.\n", i);
            // Liberar memoria ya asignada antes de salir
            for (int k = 0; k < i; k++) {
                free(matriz[k]);
            }
            free(matriz);
            return 1;
        }
    }

    long long suma = 0; // Usar long long para evitar desbordamiento en la suma

    // Leer los elementos de la matriz y calcular la suma
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (scanf("%d", &matriz[i][j]) != 1) {
                fprintf(stderr, "Error: No se pudo leer el elemento en la posición (%d, %d).\n", i, j);
                // Liberar memoria antes de salir
                for (int k = 0; k < N; k++) free(matriz[k]);
                free(matriz);
                return 1;
            }
            suma += matriz[i][j];
        }
    }

    // Imprimir la suma total
    printf("%lld\n", suma);

    // Liberar la memoria asignada
    for (int i = 0; i < N; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
```

