#include <iostream>
using namespace std;

class Car
{
    public:
    string brand;
    string model;
    Car();
    Car(string brand, string model);
};

Car::Car()
{
    brand = "Unknown";
    model = "Unknown";
}

Car::Car(string x, string y)
{
    brand = x;
    model = y;
}

int main()
{
    Car myCar;
    Car myCar2("Toyota", "Corolla");
    Car myCar3("Fiat", "Brava");

    cout << myCar.brand << ", " << myCar.model << endl;
    cout << myCar2.brand << ", " << myCar2.model << endl;
    cout << myCar3.brand << ", " << myCar3.model << endl;

}