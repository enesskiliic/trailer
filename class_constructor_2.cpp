#include <iostream>
using namespace std;

class MyClass
{
    public:
    string brand;
    string model;
    int year;
    MyClass(string x, string y, int z)
    {
        brand = x;
        model = y;
        year = z;
    }
};

int main()
{
    MyClass myObj("BMW","E30",1998);
    MyClass myObj2("Ford","Focus",2004);
    cout << myObj.brand << ", " << myObj.model << ", " << myObj.year << endl;
    cout << myObj2.brand << ", " << myObj2.model << ", " << myObj2.year << endl;
    return 0;
}