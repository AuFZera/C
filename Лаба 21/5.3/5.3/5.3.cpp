// 5.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <cmath>

class Figure {
public:
    
    virtual double Area() const = 0; 
    virtual double Perimeter() const = 0; 
    virtual std::string GetType() const = 0; 
    virtual ~Figure() {} 
};

class Square : public Figure {
private:
    double side; 

public:
    
    Square(double s) : side(s) {}

    double Area() const override {
        return side * side;
    }

    double Perimeter() const override {
        return 4 * side;
    }

    std::string GetType() const override {
        return "Квадрат";
    }
};

class Rectangle : public Figure {
private:
    double length; 
    double width;  

public:
    
    Rectangle(double l, double w) : length(l), width(w) {}

    double Area() const override {
        return length * width;
    }

    double Perimeter() const override {
        return 2 * (length + width);
    }

    std::string GetType() const override {
        return "Прямоугольник";
    }
};

int main() {
    
    setlocale(LC_ALL, "RUS");

    Figure* square = new Square(5.0);
    std::cout << "Тип: " << square->GetType() << std::endl;
    std::cout << "Область: " << square->Area() << std::endl;
    std::cout << "Периметр: " << square->Perimeter() << std::endl;

    std::cout << std::endl;

    Figure* rectangle = new Rectangle(4.0, 6.0);
    std::cout << "Тип: " << rectangle->GetType() << std::endl;
    std::cout << "Область: " << rectangle->Area() << std::endl;
    std::cout << "Периметр: " << rectangle->Perimeter() << std::endl;

    delete square;
    delete rectangle;

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
