#include <iostream>
using namespace std;

class Guard {                          // a stand-in for a held resource
    int n;

public:
    Guard(int n) : n(n) {
        cout << "acquire " << n << endl;
    }

    ~Guard() {
        cout << "release " << n << endl;
    }                                  // runs on unwind
};

void risky() {
    Guard g1(1);
    Guard g2(2);

    throw runtime_error("boom");       // g2, then g1 are released here
}

int main() {
    try {
        risky();
    }
    catch (const exception &e) {
        cout << "caught: " << e.what() << endl;
    }

    return 0;
}