#include <stdlib.h>
#include <stdio.h>

int main() {
    char *ptr = malloc(1024);
    if (!ptr) return 1;

    char *newptr = realloc(ptr, (size_t)-1);  // Великий розмір
    if (newptr == NULL) {
        perror("realloc failed");
        free(ptr);  // Стара пам’ять ще валідна
    } else {
        ptr = newptr;
        free(ptr);
    }
    return 0;
}
