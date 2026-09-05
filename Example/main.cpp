#include <iostream>
#include <cmath>
#include <string>
int main(){
    std::setlocale(LC_ALL, "Russian");
    std::cout << "Ведите стороны треугольника\n";
    double a, b, c;
    std::string input;
    int cnt = 1;
    while (cnt < 4) {
        std::cout << "\nВведитe " << cnt << " сторону\n";
        std::getline(std::cin, input);
        try {
            switch (cnt) {
            case 1:a = std::stod(input);
            case 2:b = std::stod(input);
            case 3:c = std::stod(input);
            }
            if (std::stod(input) <= 0) { throw std::logic_error(""); }
        }
        catch(...){
            std::cout << "Неверный ввод,повторите попытку";
            continue;
        }
        cnt++;
    }
    if (a + b < c or a + c < b or b + c < a) { std::cout << "Треугольника с такими сторонами е существует";return 0; }
    double p = (a + b + c) / 2;
    double S = sqrt(p * (p - a) * (p - b) * (p - c));
    std::cout << "Площадь: " << S;
    return 0;
}