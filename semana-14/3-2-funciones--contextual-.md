# 3.2 Funciones (Contextual)

## Planteamiento

Implementa un programa que, para un estudiante, calcule su promedio de calificaciones utilizando una función dedicada. El programa debe procesar el nombre del estudiante y una lista de sus calificaciones.

## Criterios de Aceptación

El programa debe usar al menos una función para el cálculo del promedio.
Debe mostrar el nombre del estudiante y su promedio formateado a dos decimales.
Debe manejar el caso de un estudiante sin calificaciones.

## Entradas

Nombre del estudiante (texto, en la primera línea).
Lista de calificaciones (números enteros separados por espacios, en la segunda línea).

## Salidas

El nombre del estudiante seguido de su promedio calculado (ej. 'Ana Garcia: 81.67').

## Casos de Prueba

```text
Carlos
80 75 90 -> Carlos: 81.67
Luisa
100 95 -> Luisa: 97.50
Pedro
 -> Pedro: 0.00
Maria
60 60 60 -> Maria: 60.00
```

## Código de Solución

Download: [3_2_funciones.py](./3_2_funciones.py)

```python
import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;
import java.text.DecimalFormat;

public class GestorEstudiantil {

    /**
     * Calcula el promedio de una lista de calificaciones.
     *
     * @param calificaciones Una lista de calificaciones numéricas.
     * @return El promedio de las calificaciones. Retorna 0.0 si la lista está vacía.
     */
    public static double calcularPromedio(List<Integer> calificaciones) {
        if (calificaciones == null || calificaciones.isEmpty()) {
            return 0.0;
        }
        int suma = 0;
        for (int calificacion : calificaciones) {
            suma += calificacion;
        }
        return (double) suma / calificaciones.size();
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String nombreEstudiante = scanner.nextLine(); // Lee el nombre del estudiante
        String lineaCalificaciones = scanner.nextLine(); // Lee la línea de calificaciones

        scanner.close();

        List<Integer> calificaciones = new ArrayList<>();
        if (!lineaCalificaciones.trim().isEmpty()) {
            String[] strCalificaciones = lineaCalificaciones.split(" ");
            for (String strCal : strCalificaciones) {
                calificaciones.add(Integer.parseInt(strCal));
            }
        }

        double promedio = calcularPromedio(calificaciones);

        // Formatear el promedio a dos decimales
        DecimalFormat df = new DecimalFormat("0.00");
        System.out.printf("%s: %s%n", nombreEstudiante, df.format(promedio));
    }
}
```

