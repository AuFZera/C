// 5.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

class List {
public:
    std::vector<int> elements; 

    void add(int value) {
        elements.push_back(value);
    }

    double average() const {
        if (elements.empty()) {
            std::cout << "Список пуст. Невозможно вычислить среднее арифметическое." << std::endl;
            return 0.0;
        }

        double sum = 0.0;
        for (const int& element : elements) {
            sum += element;
        }
        return sum / elements.size(); 
    }

    void display() const {
        if (elements.empty()) {
            std::cout << "Список пуст." << std::endl;
            return;
        }
        std::cout << "Элементы списка: ";
        for (const int& element : elements) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }
};

int main() {

    setlocale(LC_ALL, "RUS");

    List list; 
    int N;

    std::cout << "Введите количество элементов для добавления в список: ";
    std::cin >> N;

    for (int i = 0; i < N; ++i) {
        int value;
        std::cout << "Введите элемент " << (i + 1) << ": ";
        std::cin >> value;
        list.add(value);
    }

    list.display();

    double avg = list.average();
    std::cout << "Среднее арифметическое элементов списка: " << avg << std::endl;

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
