//
// Created by Frendzel on 2024-03-16.
//

#ifndef UNTITLED4_VECTOR2D_H
#define UNTITLED4_VECTOR2D_H

class Vector2d {
private:
    static double _epslą;
    double _x;
    double _y;
public:
    Vector2d& x(double x);
    double x() const;
    Vector2d& y(double i);
    double y() const;

    Vector2d();
    Vector2d(double x, double y);
    Vector2d(const Vector2d &v);
    
    Vector2d& operator=(const Vector2d &v);

    Vector2d add(const Vector2d &v) const;
    Vector2d sub(const Vector2d &v) const;
    Vector2d mult(const double &s) const;
    double dot(const Vector2d &v) const;
    double lengthSq() const;
    double length() const;
    Vector2d perpendicular() const;
    static void compEpsilon(double s);

    Vector2d operator+(const Vector2d &v) const;
    Vector2d operator-(const Vector2d &v) const;
    Vector2d operator-() const;
    Vector2d operator*(const double &s) const;
    Vector2d operator-=(const Vector2d &v);
    Vector2d operator+=(const Vector2d &v);
    Vector2d operator*=(const double &s);
    bool operator==(const Vector2d &v) const;
    bool operator!=(const Vector2d &v) const;
    const double& operator[](uint i) const;
    double& operator[](uint i);

    void print() const;
};
Vector2d operator*(const double &s, const Vector2d &v);
std::ostream& operator<<(std::ostream& os, const Vector2d &v);

#endif //UNTITLED4_VECTOR2D_H
