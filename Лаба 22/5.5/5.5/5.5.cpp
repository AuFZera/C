// 5.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

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

    void Add(T value) {
        if (count < size) {
            array[count++] = value; 
        }
        else {
            std::cout << "Ошибка: список заполнен, не удалось добавить элемент " << value << std::endl;
        }
    }

    int IndexOf(T value) const {
        for (int i = 0; i < count; ++i) {
            if (array[i] == value) {
                return i; 
            }
        }
        return -1; 
    }

    int CountOf(T value) const {
        int countOfValue = 0;
        for (int i = 0; i < count; ++i) {
            if (array[i] == value) {
                countOfValue++;
            }
        }
        return countOfValue; 
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
    intList.Add(20);
    intList.Add(40);
    intList.Add(50);

    std::cout << "Количество элементов в списке целых чисел: " << intList.Count() << std::endl;
    std::cout << "Элементы списка целых чисел: ";
    intList.Display();

    int index = intList.IndexOf(20);
    std::cout << "Индекс первого вхождения 20: " << index << std::endl;

    int count = intList.CountOf(20);
    std::cout << "Количество вхождений 20: " << count << std::endl;

    List<std::string> stringList;
    stringList.Add("Яблоко");
    stringList.Add("Банан");
    stringList.Add("Вишня");
    stringList.Add("Банан");
    stringList.Add("Арбуз");

    std::cout << "Количество элементов в списке строк: " << stringList.Count() << std::endl;
    std::cout << "Элементы списка строк: ";
    stringList.Display();

    int stringIndex = stringList.IndexOf("Банан");
    std::cout << "Индекс первого вхождения 'Банан': " << stringIndex << std::endl;

    int stringCount = stringList.CountOf("Банан");
    std::cout << "Количество вхождений 'Банан': " << stringCount << std::endl;

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
