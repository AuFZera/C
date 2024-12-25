#include "math_operations.h"

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

int search(char string[], int length, char symbol) {
    for (int i = 0; i < length; i++) {
        if (string[i] == symbol) {
            return i; 
        }
    }
    return -1; 
}