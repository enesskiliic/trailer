#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee(string n, int i) : name(n), id(i), salary(0.0)
{
}

void Employee::setSalary(double s)
{
    salary = s;
}

void Employee::displayInfo()
{
    cout << "Name: " << name << endl << "ID: " << id << endl;
}