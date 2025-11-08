#include <iostream>
using namespace std;

class Vektor2D
{
    private:
    int x;
    int y;

    public:
    Vektor2D(int first, int second)
    {
        x = first;
        y = second;
    }
    void print()
    {
        cout << "v1.x: " << x << " v1.y: " << y;
    }
    Vektor2D operator=(Vektor2D v2)
    {
        x = v2.x;
        y = v2.y;
        return *this;
    }
};

int main()
{
    Vektor2D v1(0,0);
    Vektor2D v2(2, 6);
    v1 = v2;
    v1.print();
    return 0;
}