#pragma once
#include "shape.h"

#include <cmath>

class Triangle : public Shape {
private:
    double sideA;
    double sideB;
    double sideC;
public:
    Triangle(const std::string& name, double sideA, double sideB, double sideC)
        : Shape(name), sideA(sideA), sideB(sideB), sideC(sideC) {}
    double getSideA() const { return sideA; }
    void setSideA(double sideA) { this->sideA = sideA; }
    double getSideB() const { return sideB; }
    void setSideB(double sideB) { this->sideB = sideB; }
    double getSideC() const { return sideC; }
    void setSideC(double sideC) { this->sideC = sideC; }
    double getArea();
    double getPerimeter() override { return sideA + sideB + sideC; }
};
