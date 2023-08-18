# Análisis TOP DOWN - Ejercicio 1

## Enunciado

Escribir un algoritmo que permita leer un valor entero y un real, que calcule y muestre la potencia del
valor real elevado al valor entero, utilizando la técnica de productos sucesivos para la potenciación

## Análisis

1. **Leer y validar el valor real (base) del usuario**

   - 1.1 Solicitar al usuario que introduzca el valor real (base).
   - 1.2 Verificar que la base ingresada sea un número válido. Si no es válido, mostrar un mensaje de error y terminar el programa.

2. **Leer y validar el valor entero (exponente) del usuario**

   - 2.1 Solicitar al usuario que introduzca el valor entero (exponente).
   - 2.2 Verificar que el exponente ingresado sea un número válido. Si no es válido, mostrar un mensaje de error y terminar el programa.
   - 2.3 Asegurarse de que no se esté intentando calcular \( 0 \) a la potencia de un número negativo. Si se da este caso, mostrar un mensaje de error y terminar el programa.

3. **Realizar la operación de potenciación**

   - 3.1 Si el exponente es 0, asignar el resultado a 1.
   - 3.2 Si el exponente es positivo:
     - Multiplicar la base por sí misma tantas veces como indique el exponente.
   - 3.3 Si el exponente es negativo:
     - Calcular la potencia con el exponente positivo.
     - Invertir el resultado.

4. **Mostrar el resultado al usuario**
   - 4.1 Imprimir el resultado en la pantalla.
