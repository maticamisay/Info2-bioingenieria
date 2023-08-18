/*
1. Si \( n = 0 \), entonces \( x^n = 1 \) (por definicion matematica, cualquier numero elevado a 0 es 1).
2. Si \( n > 0 \), entonces \( x^n = x \times x \times ... \times x \) (n veces).
3. Si \( n < 0 \), entonces \( x^n = \frac{1}{x^{-n}} \).
*/

#include <stdio.h>
int main()
{
    int exponente;
    double base, resultado = 1.0;

    // Leer el valor real (base)
    printf("Introduce el valor real (base): ");
    if (scanf("%lf", &base) != 1)
    {
        printf("Error: No has ingresado un número válido para la base.\n");
        return 1; // Salir con código de error 1
    }

    // Leer el valor entero (exponente)
    printf("Introduce el valor entero (exponente): ");
    if (scanf("%d", &exponente) != 1)
    {
        printf("Error: No has ingresado un número válido para el exponente.\n");
        return 1; // Salir con código de error 1
    }

    if (base == 0.0 && exponente < 0)
    {
        printf("Error: No se puede calcular 0 elevado a un exponente negativo.\n");
        return 1; // Salir con código de error 1
    }

    if (exponente == 0)
    {
        // x^0 = 1
        resultado = 1.0;
    }
    else if (exponente > 0)
    {
        for (int i = 0; i < exponente; i++)
        {
            resultado *= base;
        }
    }
    else
    { // exponente < 0
        for (int i = 0; i < -exponente; i++)
        {
            resultado *= base;
        }
        resultado = 1.0 / resultado;
    }

    // Mostrar el resultado
    printf("El valor de %.2lf elevado a %d es: %.2lf\n", base, exponente, resultado);

    return 0;
}

/*
Este programa lee un valor real y un valor entero, y luego realiza la potenciacion utilizando la tecnica
de productos sucesivos. Si el exponente es negativo, invertimos el resultado despues de calcular la potencia
para obtener el resultado correcto.
*/