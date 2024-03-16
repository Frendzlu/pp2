//
// Created by Frendzel on 2024-03-16.
//

#include <iostream>
#include "Vector2d.h"

Vector2d::Vector2d(): _x(0.), _y(0.) {}

Vector2d::Vector2d(double const x, double const y): _x(x), _y(y) {}

void Vector2d::x(const double x) {
    _x = x;
}

double Vector2d::x() const {
    return _x;
}

void Vector2d::y(const double y) {
    _y = y;
}

double Vector2d::y() const {
    return _y;
}

Vector2d Vector2d::add(const Vector2d &v) const {
    return {_x + v._x, _y + v._y};
}
Vector2d Vector2d::operator+(const Vector2d &v) const {
    return Vector2d::add(v);
}

Vector2d Vector2d::sub(const Vector2d &v) const {
    return {_x - v._x, _y - v._y};
}
Vector2d Vector2d::operator-(const Vector2d &v) const {
    return Vector2d::sub(v);
}
Vector2d Vector2d::operator-() const {
    return {-_x, -_y};
}

Vector2d Vector2d::mult(const double &s) const {
    return {_x * s, _y * s};
}
Vector2d Vector2d::operator*(const double &s) const {
    return Vector2d::mult(s);
}

void Vector2d::print() const {
    std::cout << "[" << _x << " " << _y << "]" << std::endl;
}