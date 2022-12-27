#include <stdio.h>
#include <stdlib.h>

int *create() {
    int y = 5;

    return &y;
}

int main(int argc, char **argv) {
    int *x = create();

    printf("%d\n", *x);

    exit(EXIT_SUCCESS);
}
