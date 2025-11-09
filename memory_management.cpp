#include <iostream>
#include <string>
using namespace std;

int main()
{
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;
    string myString;

    cout << sizeof(myInt) << endl;
    cout << sizeof(myFloat) << endl;
    cout << sizeof(myDouble) << endl;
    cout << sizeof(myChar) << endl;
    cout << sizeof(myString) << endl;


    int* ptr = new int; // we create a memory space for an integer using new
    *ptr = 35;
    cout << *ptr;
    delete ptr; // we remove the memory space with using delete
    // if we forget to delete memory, it uses more and more memory. it called 'Memory Leak'.
    return 0;
    
}