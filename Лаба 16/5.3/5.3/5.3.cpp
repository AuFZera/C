// 5.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "MyMath.h"

int main() {

    setlocale(LC_ALL, "RUS");

    double num1, num2, num3;

    std::cout << "Введите первое число: ";
    while (!(std::cin >> num1)) {
        std::cin.clear(); 
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
        std::cout << "Некорректный ввод. Пожалуйста, введите вещественное число: ";
    }

    std::cout << "Введите второе число: ";
    while (!(std::cin >> num2)) {
        std::cin.clear(); 
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Некорректный ввод. Пожалуйста, введите вещественное число: ";
    }

    std::cout << "Введите третье число: ";
    while (!(std::cin >> num3)) {
        std::cin.clear(); 
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
        std::cout << "Некорректный ввод. Пожалуйста, введите вещественное число: ";
    }

    double max_value = findMax(findMax(num1, num2), num3);
    double min_value = findMin(findMin(num1, num2), num3);

    std::cout << "Максимум: " << max_value << std::endl;
    std::cout << "Минимум: " << min_value << std::endl;

    int fact_num;
    std::cout << "Введите число для нахождения факториала: ";
    while (!(std::cin >> fact_num)) {
        std::cin.clear(); 
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
        std::cout << "Некорректный ввод. Пожалуйста, введите целое число: ";
    }

    try {
        unsigned long long fact_result = factorial(fact_num);
        std::cout << "Факториал " << fact_num << " = " << fact_result << std::endl;
    }
    catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
