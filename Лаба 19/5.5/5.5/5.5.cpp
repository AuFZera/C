// 5.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

class Stack {
private:
    std::vector<int> elements;

public:
   
    void push(int value) {
        elements.push_back(value);
    }

    int pop() {
        if (elements.empty()) {
            std::cerr << "Стек пуст. Невозможно извлечь элемент." << std::endl;
            return -1; 
        }
        int value = elements.back();
        elements.pop_back();
        return value;
    }

    void display() const {
        if (elements.empty()) {
            std::cout << "Стек пуст." << std::endl;
            return;
        }
        std::cout << "Элементы стека (снизу вверх): ";
        for (const int& element : elements) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }

    int size() const {
        return elements.size();
    }
};

int main() {

    setlocale(LC_ALL, "RUS");

    Stack stack; 
    int choice, value;

    do {
        std::cout << "Выберите действие:" << std::endl;
        std::cout << "1. Добавить элемент в стек" << std::endl;
        std::cout << "2. Извлечь элемент из стека" << std::endl;
        std::cout << "3. Показать все элементы стека" << std::endl;
        std::cout << "0. Выйти" << std::endl;
        std::cout << "Ваш выбор: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Введите элемент для добавления в стек: ";
            std::cin >> value;
            stack.push(value);
            break;
        case 2:
            value = stack.pop();
            if (value != -1) { 
                std::cout << "Извлеченный элемент: " << value << std::endl;
            }
            break;
        case 3:
            stack.display();
            break;
        case 0:
            std::cout << "Выход из программы." << std::endl;
            break;
        default:
            std::cout << "Неверный выбор. Пожалуйста, попробуйте снова." << std::endl;
        }
    } while (choice != 0);

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
