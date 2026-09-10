
#include "Triangle.h"

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
    double x = (a * a + c * c - b * b) / (2 * a);
    double h = sqrt(c*c - x*x);
    Triangle triangle(a, h);
    std::cout << "Площадь: " << triangle.area();
    return 0;
}