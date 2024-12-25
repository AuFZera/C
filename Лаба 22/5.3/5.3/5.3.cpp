// 5.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

template <typename T, int size = 10>
class List {
private:
    T array[size]; 
    int count;     

public:
  
    List() : count(0) {}

    int Count() const {
        return count;
    }

    bool Add(const T& element) {
        if (count < size) {
            array[count++] = element; 
            return true;
        }
        return false; 
    }

    void Display() const {
        for (int i = 0; i < count; ++i) {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    
    setlocale(LC_ALL, "RUS");
    
    List<int> intList;
    intList.Add(10);
    intList.Add(20);
    intList.Add(30);
    std::cout << "Количество элементов в списке целых чисел: " << intList.Count() << std::endl;
    std::cout << "Элементы списка целых чисел: ";
    intList.Display();

    List<double> doubleList;
    doubleList.Add(1.1);
    doubleList.Add(2.2);
    doubleList.Add(3.3);
    std::cout << "Количество элементов в списке дробных чисел: " << doubleList.Count() << std::endl;
    std::cout << "Элементы списка дробных чисел: ";
    doubleList.Display();

    List<std::string> stringList;
    stringList.Add("Яблоко");
    stringList.Add("Банан");
    stringList.Add("Вишня");
    std::cout << "Количество элементов в списке строк: " << stringList.Count() << std::endl;
    std::cout << "Элементы списка строк: ";
    stringList.Display();

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
