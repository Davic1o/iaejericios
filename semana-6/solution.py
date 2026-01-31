#include <stdio.h>

int main() {
    int N;
    int sum = 0;

    // Leer el número N desde la entrada estándar
    scanf("%d", &N);

    // Asegurarse de que N no sea negativo para la lógica de suma, aunque el problema
    // lo define como 'no negativo'. Si N es negativo, la suma es 0.
    if (N < 0) {
        sum = 0;
    } else {
        // Calcular la suma utilizando un bucle for
        for (int i = 1; i <= N; i++) {
            sum += i;
        }
    }

    // Imprimir el resultado seguido de un salto de línea
    printf("%d\n", sum);

    return 0;
}