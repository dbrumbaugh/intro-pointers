#include <stdio.h>
#include <stdlib.h>

void func() {
    int a = 4;
    double pi = 3.14;

    int *i_ptr = &a;
    double *d_ptr = &pi;

    printf("a:  %ld\n", i_ptr);
    printf("pi: %ld\n", d_ptr);
}

int main(int argc, char **argv) {
    int x = 5;
    int *x_ptr = &x;

    printf("x:  %ld\n", x_ptr);
    func();

    exit(EXIT_SUCCESS);
}
