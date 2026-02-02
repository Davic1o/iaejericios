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