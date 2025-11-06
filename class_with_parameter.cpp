#include <iostream>
using namespace std;

class Point
{
    public:
    int myMethod(int para);
};

int Point::myMethod(int para)
{
    return para;
}

int main()
{
    Point myClass;
    cout << myClass.myMethod(200);
    return 0;
}