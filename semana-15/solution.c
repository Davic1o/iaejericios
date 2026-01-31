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