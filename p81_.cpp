#include <iostream>
using namespace std;

class Shape {                              // abstract interface
public:
    virtual double area() const = 0;       // pure virtual
    virtual void name() const = 0;
    virtual ~Shape() {}                    // virtual destructor!
};

class Circle : public Shape {
    double r;
public:
    Circle(double r) : r(r) {}
    double area() const override { return 3.14159 * r * r; }
    void name() const override   { cout << "Circle "; }
};

class Square : public Shape {
    double s;
public:
    Square(double s) : s(s) {}
    double area() const override { return s * s; }
    void name() const override   { cout << "Square "; }
};

int main() {
    Shape* shapes[] = {
        new Circle(2),
        new Square(3)
    };                                     // upcast

    for (Shape* sh : shapes) {             // one loop, many behaviours
        sh->name();
        cout << "area = " << sh->area() << endl;
    }

    for (Shape* sh : shapes)
        delete sh;                         // virtual dtor -> correct cleanup

    return 0;
}