// 5.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
  
    Time() : hours(12), minutes(0), seconds(0) {}

    Time(int h, int m, int s) {
        if (h < 0) {
            hours = 0;
        }
        else {
            hours = h;
        }

        if (m < 0 || m >= 60) {
            minutes = 0;
        }
        else {
            minutes = m;
        }

        if (s < 0 || s >= 60) {
            seconds = 0;
        }
        else {
            seconds = s;
        }
    }

    Time(int totalSeconds) {
        if (totalSeconds < 0) {
            hours = 0;
            minutes = 0;
            seconds = 0;
        }
        else {
            hours = totalSeconds / 3600;
            totalSeconds %= 3600;
            minutes = totalSeconds / 60;
            seconds = totalSeconds % 60;
        }
    }

    void display() const {
        std::cout << "Time: " << hours << ":"
            << (minutes < 10 ? "0" : "") << minutes << ":"
            << (seconds < 10 ? "0" : "") << seconds << std::endl;
    }
};

int main() {

    setlocale(LC_ALL, "RUS");

    Time defaultTime;
    defaultTime.display();

    Time time1(10, 30, 45);
    time1.display();

    Time time2(-1, 70, 90); 
    time2.display(); 

    Time time3(12108);
    time3.display();

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
