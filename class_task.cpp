#include <iostream>
using namespace std;

class Dog
{
    public:
    void bark()
    {
        cout << "Woof!";
    }
};

int main()
{
    Dog myClass;
    myClass.bark();
    return 0;
}