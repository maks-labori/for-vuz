#pragma once
#include <iostream>
#include <cmath>
#include <string>

class Triangle {
private:
    double _side;
    double _height;
public:
    Triangle(double side, double height);
    double get_side();
    double get_height();
    void set_side(double side);
    void set_height(double height);
    double area();
};