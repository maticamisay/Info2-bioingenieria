## Análisis

1. **Inicializar el contador de puntos fuera de la circunferencia**

   - 1.1 Establecer un contador de puntos fuera de la circunferencia a 0.

2. **Leer las coordenadas del punto del usuario**

   - 2.1 Solicitar al usuario que introduzca las coordenadas \(x\) y \(y\) del punto.
   - 2.2 Continuar solicitando coordenadas hasta que se introduzca el punto (0, 0).

3. **Verificar si el punto pertenece a la circunferencia, está dentro o fuera de ella**

   - 3.1 Calcular la distancia al origen al cuadrado usando la fórmula \(x^2 + y^2\).
   - 3.2 Si la distancia al origen al cuadrado es igual a 16:
     - 3.2.1 Mostrar un mensaje indicando que el punto pertenece a la circunferencia.
   - 3.3 Si la distancia al origen al cuadrado es menor que 16:
     - 3.3.1 Mostrar un mensaje indicando que el punto está dentro de la circunferencia pero no en su borde.
   - 3.4 Si la distancia al origen al cuadrado es mayor que 16:
     - 3.4.1 Mostrar un mensaje indicando que el punto está fuera de la circunferencia.
     - 3.4.2 Incrementar el contador de puntos fuera de la circunferencia en 1.

4. **Mostrar el total de puntos que no pertenecen a la circunferencia**
   - 4.1 Una vez que se haya introducido el punto (0, 0), mostrar el total de puntos que no están en el borde de la circunferencia utilizando el contador de puntos fuera de la circunferencia.
