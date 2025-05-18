#include <stdlib.h>
#include <stdio.h>

int main() {
    // realloc з NULL — це malloc
    void *p1 = realloc(NULL, 100);
    if (p1) free(p1);

    // realloc з size = 0 — як free
    void *p2 = malloc(100);
    void *p3 = realloc(p2, 0);  // Може бути NULL
    if (p3) free(p3);  // Безпечно
    return 0;
}
