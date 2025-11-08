#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
    string name;
    const int id;

    public:
    Student(string n, int i);
    void print();
    string get_name() const;
};

Student::Student(string n, int i) : name(n), id(i)
{
}

void Student::print()
{
    cout << "Name: " << name << "  ID: " << id;
}

string Student::get_name() const
{
    return name;
}
int main()
{
    const Student s1("Gemini", 3019);
    // s1.print();
    cout << s1.get_name();
    return 0;
}