# 3.3 Procedimientos (Procedimental)

## Planteamiento

Diseña un programa en C que incluya un procedimiento (función de tipo `void`) llamado `saludar_n_veces`. Este procedimiento debe aceptar un número entero `n` y mostrar en pantalla el mensaje "Hola, C!" exactamente `n` veces.

## Criterios de Aceptación

La función `saludar_n_veces` debe ser de tipo `void` (no retorna valor).
La función debe imprimir el mensaje "Hola, C!" en una nueva línea `n` veces.

## Entradas

Un número entero positivo (n) que indica cuántas veces se debe imprimir el saludo.

## Salidas

El mensaje "Hola, C!" impreso n veces, cada uno en una línea separada.

## Casos de Prueba

```text
3
->Hola, C!
Hola, C!
Hola, C!
5
->Hola, C!
Hola, C!
Hola, C!
Hola, C!
Hola, C!
1
->Hola, C!
0
->
```

## Código de Solución

**Archivo de solución:** [3_3_procedimientos.c](./3_3_procedimientos.c)

```c
#include <stdio.h>

// Definición del procedimiento
void saludar_n_veces(int n) {
    for (int i = 0; i < n; i++) {
        printf("Hola, C!\n");
    }
}

int main() {
    int num_veces;

    // Leer la entrada
    if (scanf("%d", &num_veces) != 1) {
        fprintf(stderr, "Error al leer el número de veces.\n");
        return 1;
    }

    // Llamar al procedimiento
    saludar_n_veces(num_veces);

    return 0;
}
```

