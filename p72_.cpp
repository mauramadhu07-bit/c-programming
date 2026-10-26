#include <iostream>
using namespace std;

class Stream {
public:
    Stream() {
        cout << "Stream ctor\n";
    }

    void open() {
        cout << "stream opened\n";
    }
};

// Virtual inheritance: only one shared Stream sub-object
class InStream : virtual public Stream {};

class OutStream : virtual public Stream {};

class IOStream : public InStream, public OutStream {};

int main() {
    IOStream io;
    io.open();

    return 0;
}