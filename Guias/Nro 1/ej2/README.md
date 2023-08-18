# Análisis TOP DOWN - Ejercicio 2

## Enunciado

Leer datos enteros hasta que se llegue a 1000 elementos o que el dato ingresado sea igual a –50.
Calcular e imprimir:
a) La cantidad de elementos ingresados
b) El porcentaje de elementos pares.
c) El promedio de todos los datos ingresados, excluyendo si se ingresa el –50.
Nota: Recordar que el operador %(módulo) se usa para obtener al resto de la división entera

## Análisis

1. **Iniciar las variables**

   - Establecer `numero`, `count`, y `pares` a 0.
   - Establecer `suma` y `promedio` a 0.0.

2. **Leer y validar datos enteros del usuario**

   - Imprimir un mensaje indicando al usuario que introduzca datos enteros hasta 1000 elementos o -50 para terminar.
   - Iniciar un ciclo `while` que se ejecute mientras `count` sea menor a 1000.
     - Dentro del ciclo, leer el dato entero ingresado por el usuario y almacenarlo en la variable `numero`.
     - Verificar que el dato ingresado sea un número válido. Si no es válido, mostrar un mensaje de error y terminar el programa.
     - Si el dato ingresado es -50, terminar el ciclo.
     - Si el dato ingresado es un número par (utilizando el operador `%`), incrementar el contador `pares` en 1.
     - Acumular el dato ingresado en la variable `suma`.
     - Incrementar el contador `count` en 1.

3. **Calcular el porcentaje de números pares y el promedio**

   - Calcular el porcentaje de números pares dividiendo `pares` entre `count`, multiplicando por 100 y almacenar el resultado en `porcentajePares`.
   - Calcular el promedio dividiendo `suma` entre `count` y almacenar el resultado en `promedio`.

4. **Mostrar los resultados al usuario**
   - Imprimir la cantidad total de números ingresados.
   - Imprimir el porcentaje de números pares.
   - Imprimir el promedio de los datos ingresados.
