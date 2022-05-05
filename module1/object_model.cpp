#include <iostream>
#include <string>
using namespace std;

class Point{
public:
    int x;
    int y;
};



class Rectangle1
{
    Point leftUp;//值语义
    int width;
    int height;

};

class Rectangle2
{
    Point* m_leftUp; //堆指针

    int m_width;
    int m_height;
public:
    Rectangle2(int x, int y, int width,int height):
        m_leftUp(new Point{x,y}),
        m_width(width),
        m_height(height)
        {

            
        }

    ~Rectangle2()
    {
        delete m_leftUp;
    }
};

class MyShape
{
    Rectangle1 r1;//16 byte
    Rectangle2 r2;//16 byte
    Point p;//8 byte
    int x;//4 byte
    int y;//4 byte
    int * data;//8

};

int main(){

    Rectangle1 r1;

    Rectangle2 r2(10,20,100,200);

    cout<<sizeof(Rectangle1)<<endl;
    cout<<sizeof(Rectangle2)<<endl;
    cout<<sizeof(MyShape)<<endl;

    string s1="hellos;kdfjasdf;kjasd;fjksd;fjasd;fjasd;kfj"s;
    string s2=s1;
    s2[0]='a';
    s2.reserve(100);
}