#pragma once
#include <string>
#include "shape.h"

class Rectangle : public Shape {
private:
    double width;
    double height;
public:
    Rectangle(const std::string& name, double width, double height)
        : Shape(name), width(width), height(height) {}
    double getWidth() const { return width; }
    void setWidth(double width) { this->width = width; }
    double getHeight() const { return height; }
    void setHeight(double height) { this->height = height; }
    double getArea() override { return width * height; }
    double getPerimeter() override { return 2 * (width + height); }
};
