# 3.2 Funciones (Procedimental)

## Planteamiento

Desarrolla un programa en C que implemente una función llamada `esPar` que determine si un número entero es par o impar. La función debe recibir un entero como argumento y retornar 1 si es par, y 0 si es impar. En la función `main`, solicita al usuario un número, utiliza `esPar` y muestra el resultado.

## Criterios de Aceptación

La función `esPar` debe estar definida correctamente.
La función `main` debe leer un número entero.
La función `main` debe invocar a `esPar` y mostrar un mensaje indicando si el número es par o impar.

## Entradas

Un número entero (ej. 7)

## Salidas

Mensaje indicando si el número es par o impar (ej. 'El número 7 es impar.')

## Casos de Prueba

```text
7 -> El número 7 es impar.
10 -> El número 10 es par.
0 -> El número 0 es par.
-3 -> El número -3 es impar.
```

## Código de Solución

Download: [solution.c](./solution.c)

```c
#include <stdio.h>

// Función para determinar si un número es par
int esPar(int numero) {
    if (numero % 2 == 0) {
        return 1; // Es par
    } else {
        return 0; // Es impar
    }
}

int main() {
    int num_ingresado;

    printf("Ingresa un número entero: ");
    scanf("%d", &num_ingresado);

    if (esPar(num_ingresado)) {
        printf("El número %d es par.\n", num_ingresado);
    } else {
        printf("El número %d es impar.\n", num_ingresado);
    }

    return 0;
}
```

