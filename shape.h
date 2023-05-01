#pragma once
#include <string>

using namespace std;

class Shape {
protected:
    string name;
public:
    Shape(string name) : name(name) {}
    virtual double getArea();
    virtual double getPerimeter();
    string getName() { return name; }
    void setName(string name) { this->name = name; }
};
