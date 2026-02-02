# 4.3 Arreglos unidimensionales y bidimensionales (Cadenas) (Procedimental)

## Planteamiento

Crea un programa en C que reciba una cadena de texto y un carácter, y cuente el número de veces que el carácter aparece en la cadena. Se deben considerar mayúsculas y minúsculas como distintas.

## Criterios de Aceptación

El programa debe leer la cadena y el carácter de entrada.
Debe imprimir el conteo exacto de ocurrencias del carácter.

## Entradas

Una cadena de caracteres (ej. 'programacion').
Un único carácter a buscar (ej. 'o').

## Salidas

Un número entero que representa la cantidad de ocurrencias.

## Casos de Prueba

```text
Hola Mundo
o -> 2
programacion en c
a -> 2
Desarrollo
x -> 0

 -> 0


a -> 0
a
a -> 1
AAAAA
A -> 5
Mississippi
s -> 4
CamelCase
e -> 2

```

## Código de Solución

**Archivo de solución:** [4_3_arreglos_unidimensionales_y_bidimensionales_ca.c](./4_3_arreglos_unidimensionales_y_bidimensionales_ca.c)

```c
#include <stdio.h>
#include <string.h>

int main() {
    char cadena[200]; 
    char caracter_buscado;
    int contador = 0;
    int i;

    // Leer la cadena (línea completa)
    if (fgets(cadena, sizeof(cadena), stdin) == NULL) {
        return 1; // Error al leer
    }
    // Eliminar el carácter de nueva línea si está presente
    cadena[strcspn(cadena, "\n")] = '\0';

    // Leer el carácter a buscar
    // El espacio antes de %c consume cualquier espacio en blanco pendiente (ej. newline)
    if (scanf(" %c", &caracter_buscado) != 1) {
        return 1; // Error al leer
    }

    // Contar ocurrencias
    for (i = 0; cadena[i] != '\0'; i++) {
        if (cadena[i] == caracter_buscado) {
            contador++;
        }
    }

    // Imprimir el resultado
    printf("%d\n", contador);

    return 0;
}
```

