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