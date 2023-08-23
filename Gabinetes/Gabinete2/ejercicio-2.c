#include <stdio.h>

int main() {
    int numViniateros;
    double kgUva, totalUva = 0, totalMoscatel = 0, totalBlancas = 0, totalTintas = 0;
    char tipoUva;

    printf("Ingrese la cantidad de viniateros: ");
    scanf("%d", &numViniateros);

    for (int i = 0; i < numViniateros; i++) {
        printf("Ingrese la cantidad de uva cosechada por el viniatero %d (kg): ", i + 1);
        scanf("%lf", &kgUva);

        do {
            printf("Ingrese el codigo del tipo de uva (m/c/b/t): ");
            scanf(" %c", &tipoUva);
        } while (tipoUva != 'm' && tipoUva != 'c' && tipoUva != 'b' && tipoUva != 't');

        totalUva += kgUva;

        switch (tipoUva) {
            case 'm':
                totalMoscatel += kgUva;
                break;
            case 'b':
                totalBlancas += kgUva;
                break;
            case 't':
                totalTintas += kgUva;
                break;
        }
    }

    double porcentajeMoscatelBlanca = ((totalMoscatel + totalBlancas) / totalUva) * 100;

    printf("\nResultados:\n");
    printf("a) Total de uva entregada a la bodega: %.2lf kg\n", totalUva);
    printf("b) Porcentaje de uva moscatel y blanca: %.2lf%%\n", porcentajeMoscatelBlanca);
    printf("c) Cantidad de kilos de uvas tintas: %.2lf kg\n", totalTintas);

    return 0;
}
