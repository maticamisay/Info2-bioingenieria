## Análisis Top-Down

1. **Inicializar variables**

   - Establecer el número de familias a `0`.
   - Establecer el primer ingreso a `-1` para indicar que aún no se ha establecido.
   - Establecer el contador de familias con ingresos menores que el primer ingreso a `0`.

2. **Procesar información de las familias hasta que se alcancen las 1000 o la cantidad de integrantes sea menor o igual a `0`**

   - Solicitar al usuario que introduzca la cantidad de integrantes de la familia.

- Si la cantidad de integrantes es `0` o menor, terminar el proceso de entrada.
- **Procesar edades de los integrantes de la familia**
  - 2.3.1 Establecer la suma de edades a `0`.
- 2.3.2 Iniciar un ciclo que se repita según la cantidad de integrantes. - Solicitar al usuario la edad del integrante. - Sumar la edad al acumulador `sumaEdades`.

  2.4 Solicitar al usuario que introduzca el ingreso mensual de la familia.

  2.5 **Determinar si el ingreso de la familia actual es menor que el ingreso de la primera familia**
  2.5.1 Si es la primera familia, establecer `primerIngreso` con el valor de `ingresoMensual`.
  2.5.2 Si no es la primera familia y su ingreso es menor que el `primerIngreso`, incrementar el contador `familiasIngresoBajo`.

  2.6 Mostrar el promedio de edades de la familia actual.
  2.7 Incrementar el contador `numFamilias`.

3. **Generar informes basados en los datos recopilados**
   3.1 Si se ingresaron datos de al menos una familia:
   3.1.1 Mostrar la cantidad total de familias ingresadas.
   3.1.2 Calcular y mostrar el porcentaje de familias con ingresos menores que la primera familia ingresada.
   3.2 Si no se ingresaron datos, informar al usuario que no se ingresaron datos.

4. **Terminar el programa**.
   4.1 Devolver `0` y finalizar la ejecución del programa.
