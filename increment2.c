#include <stdio.h>
#include <stdlib.h>

void increment(int *x) {
    (*x)++;

    printf("Increment: %d\n", *x);
}


int main(int argc, char **argv) {
    int x = 5;
    
    printf("Main: %d\n", x);
    increment(&x);
    printf("Main: %d\n", x);

    exit(EXIT_SUCCESS);
}
