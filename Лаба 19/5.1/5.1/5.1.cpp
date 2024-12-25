// 5.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

struct Stack {
    std::vector<int> elements; 
    int maxSize;               

    Stack(int size) : maxSize(size) {}

    bool push(int value) {
        if (elements.size() < maxSize) {
            elements.push_back(value);
            return true;
        }
        else {
            std::cout << "Стек переполнен. Невозможно добавить элемент " << value << std::endl;
            return false;
        }
    }

    bool pop() {
        if (!elements.empty()) {
            std::cout << "Удален элемент: " << elements.back() << std::endl;
            elements.pop_back();
            return true;
        }
        else {
            std::cout << "Стек пуст. Невозможно удалить элемент." << std::endl;
            return false;
        }
    }

    void display() const {
        if (elements.empty()) {
            std::cout << "Стек пуст." << std::endl;
            return;
        }
        std::cout << "Элементы стека: ";
        for (int i = elements.size() - 1; i >= 0; --i) {
            std::cout << elements[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {

    setlocale(LC_ALL, "RUS");

    int N;

    std::cout << "Введите максимальный размер стека: ";
    std::cin >> N;

    Stack stack(N); 

    for (int i = 0; i < N; ++i) {
        int value;
        std::cout << "Введите элемент " << (i + 1) << ": ";
        std::cin >> value;
        stack.push(value); 
    }

    stack.display();

    char choice;
    do {
        std::cout << "Хотите удалить элемент из стека? (y/n): ";
        std::cin >> choice;
        if (choice == 'y' || choice == 'Y') {
            stack.pop();
            stack.display();
        }
    } while (choice == 'y' || choice == 'Y');

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
