#include <stdio.h>

/*
1. Si \( n = 0 \), entonces \( x^n = 1 \) (por definición matemática, cualquier número elevado a 0 es 1).
2. Si \( n > 0 \), entonces \( x^n = x \times x \times ... \times x \) (n veces).
3. Si \( n < 0 \), entonces \( x^n = \frac{1}{x^{-n}} \).
*/

int main() {
    int exponente;
    double base, resultado = 1.0;

    // Leer el valor entero (exponente) y el valor real (base)
    printf("Introduce el valor real (base): ");
    scanf("%lf", &base);

    printf("Introduce el valor entero (exponente): ");
    scanf("%d", &exponente);

    if (exponente == 0) {
        // x^0 = 1
        resultado = 1.0;
    } else if (exponente > 0) {
        // x^n = x * x * ... * x (n veces)
        for (int i = 0; i < exponente; i++) {
            resultado *= base;
        }
    } else {  // exponente < 0
        // x^-n = 1/x^n
        for (int i = 0; i < -exponente; i++) {
            resultado *= base;
        }
        resultado = 1.0 / resultado;
    }

    // Mostrar el resultado
    printf("El valor de %.2lf elevado a %d es: %.2lf\n", base, exponente, resultado);

    return 0;
}
/*
Este programa lee un valor real y un valor entero, y luego realiza la potenciación utilizando la técnica
de productos sucesivos. Si el exponente es negativo, invertimos el resultado después de calcular la potencia
para obtener el resultado correcto.
*/
