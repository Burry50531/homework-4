#define _GNU_SOURCE  // Щоб увімкнути reallocarray
#include <stdlib.h>
#include <stdio.h>

struct sbar {
    int data[10];
};

int main() {
    struct sbar *ptr = calloc(1000, sizeof(struct sbar));
    if (!ptr) {
        perror("calloc failed");
        return 1;
    }

    struct sbar *newptr = reallocarray(ptr, 500, sizeof(struct sbar));
    if (!newptr) {
        perror("reallocarray failed");
        free(ptr);  // Старий вказівник ще валідний
        return 1;
    }

    ptr = newptr;
    free(ptr);
    return 0;
}
