#include <iostream>
using namespace std;

class Base1{
    int x;
    int y;


public:

    virtual ~Base1()=default;

    Base1(){
        process();//JMP 0x000064
    }
 
    virtual void process() //0x000064
    {
        x++;
    }
};



class Sub1: public Base1{
   

public:
     int data;


     void process() override  
    {

    }

    ~Sub1()
    {
        //.....
    }
  
};







void process1(Base1 b)
{

    b.process();//非多态调用--编译时绑定 JMP 0x0000040

}
void process2(Base1* b)
{
    b->process();//多态调用 JMP (虚表指针)

}

void process3(Base1& b)
{
    b.process();//多态调用
}

int main()
{
    Base1 b1;
    Sub1 s1;

    b1.process();//process(&b1);
    s1.process();//process(&s1);

    b1=s1;//对象切片，常常可能是错误
    //s1=b1;
    b1.process();

    Base1* ps1=new Sub1();

    process1(s1);//对象切片
    process1(*ps1);//对象切片

    process2(ps1);
    process2(&s1);
    process3(s1);
    process3(*ps1);

    Sub1* ps2=dynamic_cast<Sub1*>(ps1); //多态转型

    //ps2->data++;
    ps2->process();

    //Sub1* ps2=(Sub1*)ps1; C转型不建议

    delete ps1; //1. 调用虚析构函数 2 释放内存

}