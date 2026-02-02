# 3.2 Funciones (Procedimental)

## Planteamiento

Desarrolla una función en C que calcule el área de un círculo dado su radio. El programa principal debe leer el radio e imprimir el resultado.

## Criterios de Aceptación

La función debe recibir un número flotante (radio) y devolver un número flotante (área).

## Entradas

Un número flotante representando el radio (ej. 5.0).

## Salidas

Un número flotante con el área calculada (ej. 78.539816).

## Casos de Prueba

```text
5.0 -> 78.539816
10.0 -> 314.159265
1.0 -> 3.141593
0.0 -> 0.000000
2.5 -> 19.634954
```

## Código de Solución

**Archivo de solución:** [3_2_funciones.c](./3_2_funciones.c)

```c
#include <stdio.h>
#include <math.h> // Para M_PI

// Función para calcular el área de un círculo
float calcularAreaCirculo(float radio) {
    return M_PI * radio * radio;
}

int main() {
    float radio;
    // Leer el radio del círculo
    if (scanf("%f", &radio) != 1) {
        fprintf(stderr, "Error al leer el radio.\n");
        return 1;
    }

    // Calcular y imprimir el área
    float area = calcularAreaCirculo(radio);
    printf("%.6f\n", area); // Imprimir con 6 decimales para precisión en las pruebas

    return 0;
}
```

