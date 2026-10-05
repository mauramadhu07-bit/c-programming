#include<iostream>
#include<cstring>
using namespace std;
class  mystring{
    char *data;
public:
    mystring(const char *s){
        data = new char[strlen(s)+1];
        strcpy(data,s);
    }
    mystring(const mystring &o){
        data = new char[strlen(o.data)+1];
        strcpy(data,o.data);
    }
    ~mystring(){
        delete [] data;
    }
    void print()const{
        cout<<data<<endl;
    }
};
int main(){
    mystring a("Hardware");
    mystring b = a;
    a.print();
    b.print();
    return 0;
}
