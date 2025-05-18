#include <stdlib.h>
#include <stdio.h>

int main() {
    void *ptr = malloc(0);
    if (ptr == NULL) {
        printf("malloc(0) returned NULL\n");
    } else {
        printf("malloc(0) returned non-NULL pointer\n");
        free(ptr);
    }
    return 0;
}
