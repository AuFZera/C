﻿// 5.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

int main() {

    setlocale(LC_ALL, "RUS");

    std::string inputString;
    std::cout << "Введите строку: ";
    std::getline(std::cin, inputString);

    char searchChar;
    std::cout << "Введите символ для поиска: ";
    std::cin >> searchChar;

    int count = 0;
    for (char c : inputString) {
        if (c == searchChar) {
            count++;
        }
    }

    if (count > 0) {
        std::cout << "Символ '" << searchChar << "' встречается " << count << " раз(а) в строке." << std::endl;
    }
    else {
        std::cout << "Совпадений не найдено." << std::endl;
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
