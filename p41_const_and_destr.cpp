#include<iostream>
using namespace std;
class tracer{
    int id;

public:
    tracer(int i):id(i){
        cout<<"Construct #"<<id<<endl;
    }
    ~tracer(){
        cout<<"Destruct #"<<id<<endl;
    }
};
int main(){
    cout<<"enter block\n";
    {tracer a(1),b(2); cout<<"...working...\n";}
    cout<<"left block\n";
    return 0;
}