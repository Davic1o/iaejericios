# 3.2 Funciones (Procedimental)

## Planteamiento

Implementa una función en C que verifique si un número entero positivo es primo. El programa principal debe leer el número y mostrar 1 si es primo o 0 si no lo es.

## Criterios de Aceptación

La función debe recibir un entero positivo y devolver 1 (primo) o 0 (no primo).
Considerar los casos especiales como 0, 1 y 2.

## Entradas

Un número entero positivo (ej. 7).

## Salidas

1 si el número es primo, 0 si no lo es (ej. 1 para 7, 0 para 4).

## Casos de Prueba

```text
2 -> 1
3 -> 1
4 -> 0
5 -> 1
7 -> 1
11 -> 1
13 -> 1
17 -> 1
19 -> 1
23 -> 1
1 -> 0
0 -> 0
6 -> 0
9 -> 0
100 -> 0
97 -> 1
```

## Código de Solución

**Archivo de solución:** [3_2_funciones.c](./3_2_funciones.c)

```c
#include <stdio.h>

// Función para determinar si un número es primo
int esPrimo(int numero) {
    if (numero <= 1) {
        return 0; // 0 y 1 no son primos
    }
    for (int i = 2; i * i <= numero; i++) { // Optimización: solo hasta la raíz cuadrada
        if (numero % i == 0) {
            return 0; // No es primo si es divisible por algún número
        }
    }
    return 1; // Es primo
}

int main() {
    int num;
    // Leer el número entero
    if (scanf("%d", &num) != 1) {
        fprintf(stderr, "Error al leer el número.\n");
        return 1;
    }

    // Determinar e imprimir si es primo
    printf("%d\n", esPrimo(num));

    return 0;
}
```

