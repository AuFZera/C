#include "MyMath.h"


double safeDivision(double numerator, double denominator) {
    if (denominator == 0) {
        throw std::invalid_argument("������: ������� �� ����.");
    }
    return numerator / denominator;
}