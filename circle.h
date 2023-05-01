#pragma once
#define PI   3.14159265358979323846264338327950288
#include "shape.h"


class Circle : public Shape {
private:
    double radius;
public:
    Circle(const std::string& name, double radius)
        : Shape(name), radius(radius) {}
    double getRadius() const { return radius; }
    void setRadius(double radius) { this->radius = radius; }
    double getArea() override { return PI * radius * radius; }
    double getPerimeter() override { return 2 * PI * radius; }
};
