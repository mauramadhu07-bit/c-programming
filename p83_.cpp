#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() const = 0;

    virtual ~Animal() {
        cout << "~Animal\n";
    }                                    // virtual -> full cleanup
};

class Dog : public Animal {
public:
    void speak() const override {
        cout << "Woof\n";
    }

    ~Dog() {
        cout << "~Dog\n";
    }
};

int main() {
    Animal *a = new Dog();                // upcasting (implicit, safe)

    if (Dog *d = dynamic_cast<Dog*>(a)) { // downcasting (base->derived, checked)
        cout << "downcast ok -> ";
        d->speak();                       // Woof
    }

    delete a;                             // ~Dog then ~Animal (virtual dtor)

    return 0;
}