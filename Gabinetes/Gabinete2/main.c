#include <stdio.h>

int main() {
    int numFamilias = 0, cantidadIntegrantes, edad, familiasIngresoBajo = 0;
    double ingresoMensual, primerIngreso = -1, sumaEdades, porcentaje;

    while (numFamilias < 1000) {
        printf("Ingrese la cantidad de integrantes de la familia (negativo para terminar): ");
        scanf("%d", &cantidadIntegrantes);

        if (cantidadIntegrantes <= 0) {
            break;
        }

        sumaEdades = 0;
        for (int i = 0; i < cantidadIntegrantes; i++) {
            printf("Ingrese la edad del integrante %d: ", i+1);
            scanf("%d", &edad);
            sumaEdades += edad;
        }

        printf("Ingrese el ingreso mensual de la familia: ");
        scanf("%lf", &ingresoMensual);

        if (numFamilias == 0) {
            primerIngreso = ingresoMensual;
        } else if (ingresoMensual < primerIngreso) {
            familiasIngresoBajo++;
        }

        printf("Promedio de edades en esta familia: %.2lf\n", sumaEdades / cantidadIntegrantes);
        printf("-----------------------\n");
        numFamilias++;
    }

    if (numFamilias > 0) {
        printf("Cantidad de familias ingresadas: %d\n",numFamilias );
        porcentaje = (double)familiasIngresoBajo / (numFamilias - 1) * 100;
        printf("Porcentaje de familias con ingreso menor que la primera: %.2lf%%\n", porcentaje);
    } else {
        printf("No se ingresaron datos.\n");
    }

    return 0;
}
