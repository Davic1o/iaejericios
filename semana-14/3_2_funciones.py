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