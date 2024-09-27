#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value = 5;
    int const *ptr_const = &value;

    //*ptr_const = 7; // wrong
    // ptr_const++; // right

    printf("value: %d\n", *ptr_const);
    value = 9;
    printf("value: %d\n", *ptr_const);
    return 0;
}
