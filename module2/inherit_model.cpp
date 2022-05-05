#include <iostream>
using namespace std;


class Base1{
    int x;
    int y;
 
public:
    virtual void process()
    {}

 
};


class Sub1: public Base1{
    double data;



};





class Base2{
    int u;
    int v;
};

class Sub2: public Base1, public Base2
{
    double data;
};







int main()
{

    cout<<sizeof(Base1)<<endl;//16
    cout<<sizeof(Base2)<<endl;//8
    cout<<sizeof(Sub1)<<endl;//16+8=24
    cout<<sizeof(Sub2)<<endl;//16+8+8=32
}