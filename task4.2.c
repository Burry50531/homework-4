#include <stdlib.h>
#include <stdio.h>

int main() {
    int xa = 1000000;
    int xb = 1000000;

    size_t num = (size_t)xa * xb;  // Безпечне приведення типів

    void* ptr = malloc(num);
    if (ptr == NULL) {
        perror("malloc failed");
    } else {
        printf("Allocated %zu bytes\n", num);
        free(ptr);
    }

    return 0;
}
