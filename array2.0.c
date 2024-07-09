
#include <stdio.h>

int main() {

    int arr[5];


    size_t arr_size = sizeof(arr);


    size_t int_size = sizeof(int);


    printf("Size of the array (5 integers): %u bytes\n", arr_size);
    printf("Size of an integer: %u bytes\n", int_size);

    return 0;
}
