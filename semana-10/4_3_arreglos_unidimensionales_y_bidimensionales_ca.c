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