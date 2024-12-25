// 5.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

class Person {
private:
    std::string name; 
protected:
    int age; 

public:
   
    Person() : name("Неизвестно"), age(0) {}

    Person(std::string n, int a) : name(n), age(a) {}

    void DisplayInfo() const {
        std::cout << "Имя: " << name << ", Возраст: " << age << std::endl;
    }
};

class Worker : public Person {
private:
    int seniority; 
    double salary;  

public:
   
    Worker() : Person(), seniority(0), salary(0.0) {}

    Worker(std::string name, int age, int s, double sal)
        : Person(name, age), seniority(s), salary(sal) {}

    void DisplayWorkerInfo() const {
        DisplayInfo(); 
        std::cout << "Стаж: " << seniority << " Лет, Зарплата: $" << salary << std::endl;
    }
};

int main() {
    
    setlocale(LC_ALL, "RUS");

    Worker worker1;
    std::cout << "Работник 1:" << std::endl;
    worker1.DisplayWorkerInfo();

    Worker worker2("Иван Петрович", 30, 5, 50000.0);
    std::cout << "\nРаботник 2:" << std::endl;
    worker2.DisplayWorkerInfo();

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
