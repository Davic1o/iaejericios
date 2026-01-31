#include <stdio.h>

int main() {
    int num1, num2, suma;

    // Solicitar al usuario el primer numero
    printf("Ingrese el primer numero entero: ");
    scanf("%d", &num1);

    // Solicitar al usuario el segundo numero
    printf("Ingrese el segundo numero entero: ");
    scanf("%d", &num2);

    // Realizar la suma
    suma = num1 + num2;

    // Mostrar el resultado
    printf("%d\n", suma);

    return 0;
}