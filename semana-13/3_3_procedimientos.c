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