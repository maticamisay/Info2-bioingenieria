# Programación en C: Control de Flujo y Ejemplos Secuenciales

La programación en C no solo se trata de declarar variables y realizar operaciones básicas. Es esencial entender cómo controlar el flujo de un programa para realizar tareas más complejas y tomar decisiones basadas en condiciones específicas.

## Ejemplos de Programación Secuencial

La programación secuencial implica ejecutar instrucciones una tras otra en el orden en que aparecen en el código. No hay decisiones ni bucles; cada instrucción se ejecuta exactamente una vez.

**Ejemplo:**

```c
#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int suma = a + b;

    printf("La suma de %d y %d es %d\n", a, b, suma);

    return 0;
}
```

En este ejemplo, las instrucciones se ejecutan en orden: se inicializan las variables, se realiza la suma y finalmente se imprime el resultado.

## Sentencias de Control de Flujo: Selección

### if-else

La estructura `if-else` permite ejecutar bloques de código basados en condiciones específicas. Si la condición del `if` es verdadera, se ejecuta el bloque de código asociado. Si es falsa, se ejecuta el bloque de código del `else` (si está presente).

**Ejemplo:**

```c
if (edad >= 18) {
    printf("Eres mayor de edad.\n");
} else {
    printf("Eres menor de edad.\n");
}
```

### switch - break

La estructura `switch` permite seleccionar una de varias opciones basadas en el valor de una variable o expresión. Cada `case` representa una opción posible. El `break` se utiliza para salir del `switch` una vez que se ha encontrado una coincidencia.

**Ejemplo:**

```c
switch (dia) {
    case 1:
        printf("Lunes");
        break;
    case 2:
        printf("Martes");
        break;
    // ... otros días de la semana
    default:
        printf("Valor no válido");
}
```

## Sentencias de Control de Flujo: Iteración

### while

El bucle `while` repite un bloque de código mientras una condición sea verdadera. Si la condición es falsa desde el principio, el bloque de código puede no ejecutarse nunca.

**Ejemplo:**

```c
while (contador < 10) {
    printf("%d ", contador);
    contador++;
}
```

### do-while

Similar al bucle `while`, pero garantiza que el bloque de código se ejecute al menos una vez, ya que la condición se evalúa después de ejecutar el bloque.

**Ejemplo:**

```c
do {
    printf("Introduce un número positivo: ");
    scanf("%d", &numero);
} while (numero < 0);
```

### for

El bucle `for` es ideal para iteraciones donde se conoce de antemano el número de repeticiones. Consiste en tres partes: inicialización, condición y actualización.

**Ejemplo:**

```c
for (int i = 0; i < 10; i++) {
    printf("%d ", i);
}
```

---

Con estas estructuras de control de flujo, puedes construir programas en C que sean dinámicos y capaces de adaptarse a diferentes situaciones y condiciones. La práctica constante te ayudará a familiarizarte con estos conceptos y a aplicarlos de manera efectiva en tus proyectos.
