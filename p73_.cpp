#include <iostream>
using namespace std;

class Account {
protected:
    double balance = 0;  // Visible to derived classes

public:
    void deposit(double a) {
        balance += a;
    }

    double get() const {
        return balance;
    }
};

class Savings : public Account {
public:
    void addInterest() {
        balance *= 1.04;  // 4% interest
    }
};

class Current : public Account {
public:
    void charge(double fee) {
        balance -= fee;
    }
};

int main() {
    Savings s;
    s.deposit(1000);
    s.addInterest();

    Current c;
    c.deposit(1000);
    c.charge(50);

    cout << "Savings = " << s.get()
         << ", Current = " << c.get() << endl;

    return 0;
}