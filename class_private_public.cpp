#include <iostream>
using namespace std;

class MyClass
{
    int a;      // private
    int b;      // private
    public:
    int x;      // public
    private:
    int y;      // private
};

int main()
{
    MyClass myObj;
    myObj.x = 5;
    myObj.y = 20; // y is private, so there will be an error..
    return 0;
}