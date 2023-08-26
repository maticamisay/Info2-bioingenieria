# Introducción a C: Fundamentos del Lenguaje

C es un lenguaje de programación de propósito general que ha sido fundamental en el desarrollo de la informática moderna. Originado en los años 70 por Dennis Ritchie, C ha sido la base para el desarrollo de sistemas operativos, controladores y aplicaciones críticas debido a su eficiencia y control sobre el hardware.

## Identificadores

En C, un identificador es un nombre utilizado para identificar una variable, función, matriz, etc. Los identificadores deben comenzar con una letra (a-z o A-Z) o un guion bajo (\_) seguido de letras, dígitos o guiones bajos.

**Reglas para identificadores:**

- Deben comenzar con una letra (a-z o A-Z) o un guion bajo (\_).
- Pueden contener letras, dígitos o guiones bajos.
- No se permite el uso de palabras reservadas como identificadores.

**Ejemplo:**

```c
int main;
_total;
char respuestaUsuario;
```

## Tipos de Datos

C es un lenguaje tipado estáticamente, lo que significa que cada variable debe ser declarada con un tipo de dato antes de ser utilizada.

- **int:** Para números enteros.
- **float:** Para números de punto flotante.
- **double:** Para números de punto flotante con doble precisión.
- **char:** Para caracteres individuales.

## Constantes

Las constantes son valores que, una vez definidos, no pueden ser modificados durante la ejecución del programa. Proporcionan una forma de proteger ciertos valores, como configuraciones o límites, de ser alterados accidentalmente. En C, puedes definir constantes usando la palabra clave `const`.

**Ejemplo:**

```c
const int MAX_USUARIOS = 100;
```

## Variables

Las variables actúan como contenedores para almacenar datos en la memoria. Una variable en C debe ser declarada con un tipo de dato específico, y su valor puede cambiar durante la ejecución del programa.

**Ejemplo:**

```c
int edad;
float salario;
char letraInicial;
```

## Expresiones

Una expresión en C es una combinación de variables, constantes y operadores que se evalúan para producir un valor. Las expresiones son fundamentales en la programación, ya que permiten realizar cálculos y tomar decisiones.

**Ejemplo:**

```c
int total = precio + impuesto;
```

## Operadores

Los operadores son símbolos que indican una operación específica. En C, hay varios tipos de operadores:

- **Aritméticos:** Realizan operaciones matemáticas. Ejemplo: +, -, \*, /, % (módulo)
- **Relacionales:** Comparan dos valores y devuelven un valor booleano. Ejemplo: ==, !=, <, >, <=, >=
- **Lógicos:** Realizan operaciones lógicas, como AND, OR y NOT. Ejemplo: && (y), || (o), ! (no)

**Ejemplo:**

```c
int resultado = a + b;
bool esMayor = edad > 18;
```

---

Con estos fundamentos, estás listo para comenzar a explorar y experimentar con el lenguaje C. A medida que avances, descubrirás la potencia y flexibilidad que este lenguaje ofrece a los programadores, y cómo ha influido en muchos lenguajes modernos que conocemos hoy.
