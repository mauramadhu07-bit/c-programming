#include <iostream>
#include <string>
using namespace std;
 void logMsg(const string &msg,int level=1){
    const string tag[]={"","INFO","WARN","ERROR"};
    cout<<"["<<tag[level]<<"]"<<msg<<endl;
 }
 double interest(double principal,double yeras,double rate=7.5)
 {
    return principal*rate*yeras/100.0;

 }
 int main(){
    logMsg("system started");
    logMsg("low memory",2);
    cout<<"interest="<<interest(10000,2)<<endl;
    cout<<"interest="<<interest(10000,2,9.0)<<endl;
    return 0;
 }
 