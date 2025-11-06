#include <iostream>
using namespace std;

class Point
{
    public:
    void print()            // this is an inside function.
    {
        cout << "Hello World!";
    }
};

int main()
{
    Point myClass;
    myClass.print();
    return 0;
}