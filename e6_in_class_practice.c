#include "e6_in_class_practice.h"

// int* ptr_to_integer = &some_int;
// double* ptr_to_double = &some_double;
// char* string = "hello";
// int** ptr_to_integer_ptr = &ptr_to_integer;

// int f(int x) {
//     int y = 7;
//     x = 5;
//     return y;
// }

// int main() {
//     int x = 9;
//     int y = f(x);
//     printf("x has value %d, y has value %d\n", x, y);
// }

// int f(int* x) {
//     int y = 7;
//     *x = 5;
//     return y;
// }

// int main() {
//     int x = 9;
//     int y = f(&x);
//     printf("x has value %d, y has value %d\n", x, y);
// }


// int main() {
//     int arr[] = {0, 1, 2, 3};
//     printf("%d", *arr);
//     printf("%d", *(arr + 1));
// }

// int* f() {
//     int x = 5;
//     return &x;
// }

// int main() {
//     int* x_ptr = f();
//     printf("value of x is %d\n", *x_ptr);
// }

// int* f() {
//     int* x_ptr = malloc(4);
//     *x_ptr = 5;
//     return x_ptr;
// }

// int main() {
//     int* x_ptr = f();
//     printf("value of x is %d\n", *x_ptr);
//     free(x_ptr);
// }

int main() {
    int* x = malloc(4); // int is 4 bytes on my machine
    free(x);
}

int main() {
    int* arr = malloc(20); // 5 ints
    for (size_t i = 0; i < 5; ++i) {
        arr[i] = i + 10;
    }
    for (size_t i = 0; i < 5; ++i) {
        printf("element %lu is %d\n", i, arr[i]);
    }
    free(arr);
}
