#include <iostream>
using namespace std;

class Point{
public:
    int x;
    int y;//实例变量
    static int data;

    void process()
    {
        cout<<this->x<<endl;
        std::cout<<x<<endl;
        y++;

         sprocess();

         process2(100);
    }

    void process2(int d)
    {

    }

    static void sprocess();
    {
        //x++;
        data++;

       
    }

};

int Point::data=100;

/*
struct Point {
    int x;
    int y;
};

void process(Point * this)
{
    cout<<this->x<<endl;
    std::cout<<this->x<<endl;
    this->y++;

    sprocess();

    process2(this, 100);
}

void process2(Point * this, int d)
{
    
}

void sprocess()
{
    //x++;
    Point::data++;
    
}
*/



int main(){

    Point pt;
    pt.process(); // process(&pt); JMP 0x000064
}