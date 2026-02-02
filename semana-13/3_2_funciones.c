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