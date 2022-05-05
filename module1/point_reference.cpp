#include <iostream>
#include <vector>
#include <string>

using namespace std;




void process1(const Point& p)
{
    //p.x++;

}

void process2( Point p)
{
    
}

void process3( Point* p)
{
    
    
}





Point process4()
{
    Point p{10,20};
    return p;
}

Point& process5()
{
    Point p{10,20};
    return p;//错误
}

Point* process6( )
{
    Point *p=new Point{10,20};
    return p; 
}


int main()
{
    func();

    Point* p=new Point{10,20};
    process3(p);
    delete p;

    Point p2;
    process1(p2);

    Point* p3=process6();
    //...
    delete p3;
}