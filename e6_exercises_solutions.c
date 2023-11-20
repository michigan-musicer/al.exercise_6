#include "e5_exercises.h"

// Returns the nth fibonacci number.
// For n = 0, return 0. For n = 1, return 1.
// For all other positive integers, return the sum of the 
// previous two fibonacci numbers. For example, for n = 4,
// return 3 (since the previous two numbers should be 2 and 1 
// (for n = 3, n = 2)).

unsigned int nth_fibonacci(unsigned int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return nth_fibonacci(n - 1) + nth_fibonacci(n - 2);
}

// Returns n factorial, or n!
// Note that 0! is equal to 1.
// Requires that n is a positive integer.
// https://en.wikipedia.org/wiki/Factorial

unsigned int factorial(unsigned int n) {
    if (n == 0) {
        return 1;
    }
    return factorial(n - 1) * n;
}
