#include <stdio.h>
#include <limits.h> // Para INT_MIN

int main() {
    int n;
    // Leer el tamaño del arreglo
    if (scanf("%d", &n) != 1 || n <= 0) {
        // Manejo de error básico o suposición de entrada válida
        return 1; 
    }

    int arr[n]; // Arreglo de longitud variable (C99 VLA)
    int max_val = INT_MIN; // Inicializar con el valor entero más pequeño posible

    // Leer los elementos del arreglo y encontrar el máximo
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            // Error al leer un elemento
            return 1;
        }
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }

    // Imprimir el valor máximo encontrado
    printf("%d\n", max_val);

    return 0;
}