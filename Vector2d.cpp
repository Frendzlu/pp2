//
// Created by Frendzel on 2024-03-16.
//

#include <iostream>
#include "Vector2d.h"
#include <cmath>

double Vector2d::_epslą = 0.0;
Vector2d::Vector2d(): _x(0.), _y(0.) {}

Vector2d::Vector2d(double const x, double const y): _x(x), _y(y) {}

Vector2d::Vector2d(const Vector2d &v): _x(v.x()), _y(v.y()) {}

Vector2d& Vector2d::operator=(const Vector2d &v) = default;


Vector2d &Vector2d::x(const double x) {
    _x = x;
    return *this;
}

double Vector2d::x() const {
    return _x;
}

Vector2d &Vector2d::y(const double y) {
    _y = y;
    return *this;
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

Vector2d operator*(const double &s, const Vector2d &v) {
    return v.mult(s);
}

std::ostream& operator<<(std::ostream& os, const Vector2d &s) {
    os << "[" << s.x() << " " << s.y() << "]";
    return os;
}

double Vector2d::dot(const Vector2d &s) const {
    return _x * s._x + _y * s._y;
}

double Vector2d::length() const {
    return sqrt(lengthSq());
}

double Vector2d::lengthSq() const {
    return _x*_x+_y*_y;
    //dot this
}

Vector2d Vector2d::perpendicular() const {
    return {_y, -_x};
}

Vector2d Vector2d::operator-=(const Vector2d &v) {
    *this = sub(v);
    return *this;
};
Vector2d Vector2d::operator+=(const Vector2d &v) {
    *this = add(v);
    return *this;
};
Vector2d Vector2d::operator*=(const double &s) {
    *this = mult(s);
    return *this;
};

const double& Vector2d::operator[](uint i) const {
    return i&1 ? _y : _x;
};

double& Vector2d::operator[](uint i) {
    return i&1 ? _y : _x;
};

bool Vector2d::operator==(const Vector2d &v) const {
    //std::cout << "e: " << Vector2d::_epslą << std::endl;
    const Vector2d vTemp = sub(v);
    //std::cout << "v: " << vTemp << std::endl;
    return fabs(vTemp.x()) < _epslą && fabs(vTemp.y()) < _epslą;

};
bool Vector2d::operator!=(const Vector2d &v) const {
    return !(*this == v);
};

void Vector2d::compEpsilon(double s) {
    Vector2d::_epslą = s;
};


void Vector2d::print() const {
    std::cout << "[" << _x << " " << _y << "]" << std::endl;
}