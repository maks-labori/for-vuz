#include "Triangle.h"

Triangle::Triangle(double side, double height) :_side(side), _height(height) {
    if (side <= 0 or height <= 0) { throw std::logic_error("side or height > 0"); }
}
double Triangle::get_side() {
    return _side;
}
double Triangle::get_height() {
    return _height;
}
void Triangle::set_side(double side) {
    if (side > 0) {
        this->_side = side;
    }
    else {
        throw std::logic_error("side > 0");
    }
}
void Triangle::set_height(double height) {
    if (height > 0) {
        this->_height = height;
    }
    else {
        throw std::logic_error("height > 0");
    }
}
double Triangle::area() {
    return (_side * _height) / 2;
}