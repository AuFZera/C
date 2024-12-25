// 5.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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
        hours = (h < 0) ? 0 : h;
        minutes = (m < 0 || m >= 60) ? 0 : m;
        seconds = (s < 0 || s >= 60) ? 0 : s;
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

    void Print() const {
        std::cout << "Time: " << hours << ":"
            << (minutes < 10 ? "0" : "") << minutes << ":"
            << (seconds < 10 ? "0" : "") << seconds << std::endl;
    }

    int GetFullSeconds() const {
        return hours * 3600 + minutes * 60 + seconds;
    }

    int operator[](int index) const {
        switch (index) {
        case 1: return hours;
        case 2: return minutes;
        case 3: return seconds;
        default: return -1; 
        }
    }
};

int main() {
    
    setlocale(LC_ALL, "RUS");

    Time defaultTime;
    defaultTime.Print(); 

    Time time1(10, 30, 45);
    time1.Print(); 

    Time time2(-1, 70, 90);
    time2.Print(); 

    Time time3(12108);
    time3.Print(); 

    std::cout << "Total seconds for time1: " << time1.GetFullSeconds() << std::endl; 
    std::cout << "Total seconds for time3: " << time3.GetFullSeconds() << std::endl;

    std::cout << "Hours: " << time1[1] << std::endl; 
    std::cout << "Minutes: " << time1[2] << std::endl; 
    std::cout << "Seconds: " << time1[3] << std::endl; 
    std::cout << "Invalid index: " << time1[4] << std::endl; 

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
