## Análisis Top-Down

1. **Inicializar variables y contadores**

   - 1.1 Establecer un contador para el total de uva.
   - 1.2 Establecer contadores individuales para cada tipo de uva: moscatel, comunes, blancas y tintas.

2. **Leer la cantidad de viñateros**

   - 2.1 Solicitar al usuario que introduzca la cantidad de viñateros.
   - 2.2 Validar que el número ingresado sea positivo. Si no es válido, mostrar un mensaje de error y volver a solicitar.

3. **Recopilar información de cada viñatero**

   - 3.1 Iterar sobre el número de viñateros.
     - 3.1.1 Solicitar la cantidad de uva cosechada por el viñatero actual.
     - 3.1.2 Solicitar el tipo de uva cosechada por el viñatero actual (asegurándose de que sea uno de los códigos válidos: 'm', 'c', 'b' o 't').
     - 3.1.3 Acumular la cantidad de uva en el contador general y en el contador específico del tipo de uva correspondiente.

4. **Calcular el total de uva entregada a la bodega**

   - 4.1 Sumar las cantidades de todos los tipos de uva para obtener el total.

5. **Calcular el porcentaje de uva moscatel y blanca respecto al total**

   - 5.1 Sumar las cantidades de uva moscatel y blanca.
   - 5.2 Dividir la suma anterior por el total de uva y multiplicar por 100 para obtener el porcentaje.

6. **Mostrar los resultados al usuario**
   - 6.1 Imprimir el total de uva entregada a la bodega.
   - 6.2 Imprimir el porcentaje que representan los tipos de uva moscatel y blanca respecto del total.
   - 6.3 Imprimir la cantidad de kilos cosechados del tipo de uvas tintas.
