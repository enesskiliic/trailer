#include <iostream>
#include <string>
using namespace std;

class Book
{
    public:     // public yazmazsan default olarak bütün kodlar private olur
    string title;
    string author;
    int year;
};

int main()
{
    Book obj1;
    Book obj2;
    obj1.title = "Matilda";
    obj1.author = "Roald Dahl";
    obj1.year = 1988;
    obj2.title = "The Giving Tree";
    obj2.author = "Shel Silverstein";
    obj2.year = 1964;

    cout << obj1.title << ", " << obj1.author << ", " << obj1.year << endl;
    cout << obj2.title << ", " << obj2.author << ", " << obj2.year << endl;    
    return 0;
}