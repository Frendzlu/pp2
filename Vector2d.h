//
// Created by Frendzel on 2024-03-16.
//

#ifndef UNTITLED4_VECTOR2D_H
#define UNTITLED4_VECTOR2D_H

class Vector2d {
private:
    double _x;
    double _y;
public:
    void x(double x);
    double x() const;
    void y(double i);
    double y() const;

    Vector2d();
    Vector2d(double x, double y);

    Vector2d add(const Vector2d &v) const;
    Vector2d sub(const Vector2d &v) const;
    Vector2d mult(const double &s) const;
    Vector2d operator+(const Vector2d &v) const;
    Vector2d operator-(const Vector2d &v) const;
    Vector2d operator-() const;
    Vector2d operator*(const double &s) const;

    void print() const;
};


#endif //UNTITLED4_VECTOR2D_H
