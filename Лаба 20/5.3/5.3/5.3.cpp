// 5.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    
    Time(int h, int m, int s) {
        hours = (h < 0) ? 0 : h;
        minutes = (m < 0 || m >= 60) ? 0 : m;
        seconds = (s < 0 || s >= 60) ? 0 : s;
    }

    void Print() const {
        std::cout << hours << ":"
            << (minutes < 10 ? "0" : "") << minutes << ":"
            << (seconds < 10 ? "0" : "") << seconds << std::endl;
    }

    int GetTotalSeconds() const {
        return hours * 3600 + minutes * 60 + seconds;
    }
};

void SearchByHourRange(const std::vector<Time>& times, int startHour, int endHour) {
    for (const auto& time : times) {
        if (time.GetTotalSeconds() >= startHour * 3600 && time.GetTotalSeconds() <= endHour * 3600) {
            time.Print();
        }
    }
}

void SearchLaterThan(const std::vector<Time>& times, int hour, int minute) {
    int referenceTime = hour * 3600 + minute * 60;
    for (const auto& time : times) {
        if (time.GetTotalSeconds() > referenceTime) {
            time.Print();
        }
    }
}

void SearchOutsideRange(const std::vector<Time>& times, int startHour, int endHour) {
    for (const auto& time : times) {
        if (time.GetTotalSeconds() < startHour * 3600 || time.GetTotalSeconds() > endHour * 3600) {
            time.Print();
        }
    }
}

int main() {

    setlocale(LC_ALL, "RUS");

    int n;
    std::cout << "Введите количество объектов времени: ";
    std::cin >> n;

    std::vector<Time> times;
    for (int i = 0; i < n; ++i) {
        int h, m, s;
        std::cout << "Введите время (часы, минуты, секунды) для объекта " << i + 1 << ": ";
        std::cin >> h >> m >> s;
        times.emplace_back(h, m, s);
    }

    std::cout << "\nВсе введенные времена:\n";
    for (const auto& time : times) {
        time.Print();
    }

    int choice;
    std::cout << "\nВыберите критерий поиска:\n";
    std::cout << "1) В диапазоне между двумя значениями часов\n";
    std::cout << "2) Позже указанного времени\n";
    std::cout << "3) За пределами диапазона между двумя значениями часов\n";
    std::cout << "Ваш выбор: ";
    std::cin >> choice;

    switch (choice) {
    case 1: {
        int startHour, endHour;
        std::cout << "Введите начальный и конечный часы: ";
        std::cin >> startHour >> endHour;
        SearchByHourRange(times, startHour, endHour);
        break;
    }
    case 2: {
        int hour, minute;
        std::cout << "Введите часы и минуты: ";
        std::cin >> hour >> minute;
        SearchLaterThan(times, hour, minute);
        break;
    }
    case 3: {
        int startHour, endHour;
        std::cout << "Введите начальный и конечный часы: ";
        std::cin >> startHour >> endHour;
        SearchOutsideRange(times, startHour, endHour);
        break;
    }
    default:
        std::cout << "Неверный выбор.\n";
        break;
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
