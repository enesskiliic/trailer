#include <iostream>
#include <string>
using namespace std;

int main()
{
    string food = "Pizza";

    cout << food << endl;   // outputs the value of food (Pizza)
    string *foodAdress = &food;
    cout << foodAdress << endl;  // outputs the adress of food(0xdc23bff7a0)
    cout << *foodAdress << endl; // outputs the value of food (Pizza)


    string &refFood = food; // it creates a reference, it uses same adress.
    cout << food << endl;   // Pizza
    cout << refFood << endl;    // Pizza
    refFood = "Hamburger";  // it also changes the food variable.
    cout << food << endl;
    cout << &food << " "  << &refFood << endl;  // same adress

    /*
    foodAdress = &food
    *foodAdress = food
    */


}