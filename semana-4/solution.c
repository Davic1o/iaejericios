#include <stdio.h>

int main() {
    int ventas_diarias;
    int total_ventas = 0;
    int dia_actual = 0;
    const int MAX_DIAS = 30;

    // Loop for reading daily sales
    // Continues as long as sales are positive and max_days is not reached
    while (dia_actual < MAX_DIAS) {
        // Read daily sales
        if (scanf("%d", &ventas_diarias) != 1) {
            // Error reading input or EOF
            break;
        }

        // Check for negative input to stop early
        if (ventas_diarias < 0) {
            break;
        }

        // Accumulate sales
        total_ventas += ventas_diarias;
        dia_actual++; // Increment day counter
    }

    // Print total sales
    printf("%d\n", total_ventas);

    return 0;
}
