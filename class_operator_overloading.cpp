#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:
    Complex(int r, int i)

    {
        real = r;
        imaginary = i;
    }

    void print()

    {
        cout << real << " + " << imaginary << "i";
    }

    Complex operator+(Complex c2)

    {
        Complex c3(0, 0);
        c3.real = real + c2.real;
        c3.imaginary = imaginary + c2.imaginary;
        return c3;
    }
};

int main()
{
    Complex c1(3, 5);
    Complex c2(2, 4);
    Complex c3 = c1 + c2;
    c3.print();
    return 0;
}
