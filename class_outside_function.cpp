#include <iostream>
using namespace std;

class Point
{
    public:
    void print();
};

void Point::print()         // this is an outside function 
{                           // parametresiz fonksiyon
    cout << "Hello World!";
}

int main()
{
    Point myClass;
    myClass.print();
    return 0;
}