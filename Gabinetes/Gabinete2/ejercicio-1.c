#include <stdio.h>

int main() {
    double x, y;
    int puntosFuera = 0;

    while (1) {
        printf("Ingrese las coordenadas del punto (x y): ");
        scanf("%lf %lf", &x, &y);

        // Condición de parada
        if (x == 0 && y == 0) {
            break;
        }

        // Calculamos la distancia al origen al cuadrado
        double distanciaAlOrigenCuadrado = x * x + y * y;

        // Verificamos si el punto está en la circunferencia
        if (distanciaAlOrigenCuadrado == 16) {
            printf("El punto (%.2lf, %.2lf) pertenece a la circunferencia.\n", x, y);
        } else if (distanciaAlOrigenCuadrado < 16) {
            printf("El punto (%.2lf, %.2lf) esta dentro de la circunferencia pero no en su borde.\n", x, y);
        } else {
            printf("El punto (%.2lf, %.2lf) esta fuera de la circunferencia.\n", x, y);
            puntosFuera++;
        }
    }

    printf("Total de puntos que no estan en el borde de la circunferencia: %d\n", puntosFuera);

    return 0;
}
