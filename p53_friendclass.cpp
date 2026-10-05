#include<iostream>
using namespace std;
class car{
    int speed=0;
    friend class dashboard;
    public:
    void accelerate(){speed+=10;}
};
class dashboard{
    public:

    void display(const car&c){cout<<"speed="<<c.speed<<"km/h\n";}
};
int main(){
    car c; c.accelerate();c.accelerate();
    dashboard().display(c);
    return 0;
}