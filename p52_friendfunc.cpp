#include <iostream>
using namespace std;
class Distance
{
    int feet,inch;
    public:
    Distance(int f=0,int i=0): feet(f),inch(i)
{}
friend Distance add(const Distance &a,const Distance &b);
void show() const{ cout<<feet <<"ft" <<inch<< "in\n";}
};
Distance add(const Distance &a,const Distance &b)
{
    int totalinch = (a.feet +b.feet)*12+ a.inch +b.inch;
    return Distance(totalinch /12, totalinch%12);
}
int main()
{

    Distance d1(5,8), d2(3,7);
    Distance d3= add(d1,d2);
    d3.show();
    return 0;
}