#include <vector>
#include <array>
#include <iostream>

using namespace std;

/*
template<typename T>
class vector
{
 
    T* arr; //heap array
    int capacity;
    int size;

};

template<typename T, int n>
class array
{
    T data[n];
};

*/

void func(const vector<int>& v)
{

}

int main(){

    vector<int> v1={1,2,3,4,5,6,7,8};
    vector v2={1,2,3,4,5,6,7,8};
    for(auto value : v2)
    {
        std::cout << value << ' ';
        
    }

    //int a[10];

    //const int  a=6;
    std::array<int, 6> a1{ 1, 2, 3,4,5,6 }; 
    std::array a2 = {1, 2, 3,4,5}; 

 
    std::array<string, 3> a3 = { "Hello", "C++", "Camp" };

    std::sort(a1.begin(), a1.end());

    for(auto& data: a3)
        std::cout << data << ' ';

}