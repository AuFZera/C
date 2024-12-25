#include "math_operations.h"

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

int factorial(int n) {
    if (n < 0) {
        return -1; 
    }
    if (n == 0 || n == 1) {
        return 1; 
    }
    return n * factorial(n - 1); 
}