#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

    int x = 4;
    int *my_ptr = &x;

    printf("%ld\n", (size_t) my_ptr);
    printf("%d\n", *my_ptr);

    return EXIT_SUCCESS;
}
