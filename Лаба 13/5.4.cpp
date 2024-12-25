// 5.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <string>

struct Person {
    std::string name;
    int age;
    double height; 
};

int main() {
    
    setlocale(LC_ALL, "RUS");

    std::string filename;
    std::ifstream inFile;

    std::cout << "Введите имя файла для чтения: ";
    std::getline(std::cin, filename);

    inFile.open(filename);
    if (!inFile) {
        std::cerr << "Не удалось открыть файл " << filename << " для чтения." << std::endl;
        return 1;
    }

    Person persons[3]; 

    
    for (int i = 0; i < 3; ++i) {
        if (inFile >> persons[i].name >> persons[i].age >> persons[i].height) {
           
        }
        else {
            std::cerr << "Ошибка при считывании данных для человека " << (i + 1) << std::endl;
            inFile.close();
            return 1;
        }
    }

    inFile.close();

    std::cout << "Данные о людях:" << std::endl;
    for (const auto& person : persons) {
        std::cout << "Имя: " << person.name
            << ", Возраст: " << person.age
            << ", Рост: " << person.height << " м" << std::endl;
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
