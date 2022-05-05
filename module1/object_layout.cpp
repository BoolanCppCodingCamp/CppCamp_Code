#include <iostream>
using namespace std;



class C1
{
    int i;    //4 byte  
    char c1;  //1 byte
    char c2;  //1 byte
/*
public:
    virtual void process1()
    {
        i++;
    }

    virtual void process2()
    {
        i++;
    }

    virtual void process3()
    {
        i++;
    }*/
}; 




class C2
{
    char c1;  //4
    int i;    //4
    char c2;  //4
};//12 byte 




class C3
{
    int i1; 
    char c1;
    int i2; 
    char c2; 
    int i3;
    char c3;
    int i4;
    char c4; 
   
};//32
class C4
{
    int i1; //4byte 
    int i2; 
    int i3;
    int i4;

    char c1;
    char c2; 
    char c3;
    char c4; 
};//20




int main()
{


  cout<<sizeof(C1)<<endl;// 输出8
  cout<<sizeof(C2)<<endl;// 输出12
  cout<<sizeof(C3)<<endl;// 输出32
  cout<<sizeof(C4)<<endl;// 输出20


}





