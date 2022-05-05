#include <iostream>
#include <vector>
#include <string>

using namespace std;


int data;


class Point{
public:
    int x{0};
    int y{0};

    static int data;
};

int Point::data{100};


int main()
{
    int x {10};
    int arr[]={1,2,3,4,5};//栈数组
    auto y=20;
    auto s1="hello"s;//自动类型推导 string
    int & data=x; //栈引用


    int* px =new int{10}; //堆指针对象
    int* parray=new int[5]{1,2,3,4,5}; //堆数组

    delete px;
    delete[] parray;

        
    {
        vector v{10,20,30,40,50};

        for(auto& s : v)
        {
            cout<<s<<endl;

        }
    }

    Point pt1{10,20};//栈对象
    Point pt2{100,200};
    pt2.x++;

    
    Point* p3=new Point{10,20};//heap
    Point* p4=new Point{30,40};

    pt1=pt2;//stack->stack
    *p3=*p4;//heap->heap
    pt2=*p4;//heap->stack
    *p4=pt2;//stack->heap


    Point& pr1=*p3;//堆引用
    Point& pr2=pt1;//栈引用

    Point* p5=&pt1; //栈指针
    Point* p6=&pr1; //堆指针

    delete p3;
    delete p4;
}







