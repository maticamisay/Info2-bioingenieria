/*
1. Leer datos enteros hasta que:
    a) Se hayan ingresado 1000 elementos.
    b) El dato ingresado sea igual a -50.
2. Calcularemos:
    a) La cantidad de elementos ingresados.
    b) El porcentaje de elementos pares.
    c) El promedio de todos los datos ingresados, excluyendo el dato -50.
Nota: Usamos el operador %(módulo) para verificar si un número es par.
*/

#include <stdio.h>

int main()
{
    int numero, count = 0, pares = 0;
    double suma = 0.0, promedio;

    printf("Introduce datos enteros (hasta 1000 elementos o -50 para terminar):\n");

    // Ciclo de lectura
    while (count < 1000)
    {
        if (scanf("%d", &numero) != 1)
        {
            printf("Error: No has ingresado un número válido.\n");
            return 1; // Salir con código de error 1
        }

        // Si se ingresa -50, terminar
        if (numero == -50)
            break;

        // Contar elementos pares
        if (numero % 2 == 0)
            pares++;

        // Acumular suma
        suma += numero;

        count++;
    }

    // Calcular porcentaje y promedio
    double porcentajePares = (double)pares / count * 100;
    promedio = suma / count;

    // Mostrar resultados
    printf("Cantidad de elementos ingresados: %d\n", count);
    printf("Porcentaje de elementos pares: %.2lf%%\n", porcentajePares);
    printf("Promedio de los datos ingresados: %.2lf\n", promedio);

    return 0;
}

/*
Este programa recopila datos del usuario hasta que se ingresen 1000 elementos o se introduzca el valor -50.
Calcula y muestra la cantidad total de números ingresados, el porcentaje de números pares y el promedio de los números.
También contiene validaciones para garantizar la entrada correcta.
*/