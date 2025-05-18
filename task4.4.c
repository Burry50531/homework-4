#include <stdlib.h>
#include <stdio.h>

int main() {
    int i = 0;
    while (i < 5) {
        void *ptr = malloc(1024);
        if (!ptr) {
            perror("malloc failed");
            exit(1);
        }
        printf("Iteration %d: memory allocated\n", i);
        free(ptr);
        i++;
    }
    return 0;
}
