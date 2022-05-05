#include <iostream>
#include <string>
#include <sstream>
#include <memory>
#include <vector>
#include <array>
#include <bitset>
using namespace std;



class BitPoint{
public:
    int x:4;//4bit
    int y:4;//4bit
    int z:4;//4bit
    int a:4;//4bit
    int b:4;//4bit
    int c:4;//4bit
    int d:4;//4bit

    bool t:1;//1bit
    bool u:1;//1bit
    bool v:1;//1bit
    bool w:1;//1bit
    //bool s:1;//1bit

   
};


class Point{
public:
    int x; //4byte
    int y; //4byte
    int z; //4byte
    bool t; //1byte
    bool u; //1byte
    bool v; //1byte
    bool w; //1byte
    //bool s; //1byte
};

 
int main()
{
    cout<<sizeof(Point)<<endl;
    cout<<sizeof(BitPoint)<<endl;


}

