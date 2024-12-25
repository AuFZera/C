#include "MyMath.h"

double safeDivision(double numerator, double denominator) {
    if (denominator == 0) {
        throw std::invalid_argument("Ошибка: деление на ноль.");
    }
    return numerator / denominator;
}

double findMax(double a, double b) {
    return (a > b) ? a : b;
}

double findMin(double a, double b) {
    return (a < b) ? a : b;
}

unsigned long long factorial(int n) {
    if (n < 0) {
        throw std::invalid_argument("Ошибка: факториал не определен для отрицательных чисел.");
    }
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}