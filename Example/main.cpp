#include <iostream>
#include <cmath>
#include <string>

class Triangle {
private:
    double _side;
    double _height;
public:
    Triangle(double side, double height) :_side(side), _height(height) {
        if (side <= 0 or height <= 0) { throw std::logic_error("side or height > 0"); }
    }
    double get_side() {
        return _side;
    }
    double get_height() {
        return _height;
    }
    void set_side(double side) {
        if (side > 0) {
            this->_side = side;
        }
        else {
            throw std::logic_error("side > 0");
        }
    }
    void set_height(double height) {
        if (height > 0) {
            this->_height = height;
        }
        else {
            throw std::logic_error("height > 0");
        }
    }
    double area() {
        return (_side * _height)/2;
    }
};
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