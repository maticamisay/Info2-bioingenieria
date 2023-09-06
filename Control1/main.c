#include <stdio.h>

int main() {
    int a1 = -3;
    int a2 = 7;
    int cx = 3;

    if ((++a1 > 8) || (cx-- >= 10) && (--a2)) {
        // No hacer nada aquí, solo estamos evaluando la expresión.
    }

    printf("a1 = %d\n", a1);
    printf("a2 = %d\n", a2);
    printf("cx = %d\n", cx);

    return 0;
}
