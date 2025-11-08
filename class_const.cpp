#include <iostream>
using namespace std;

class MyClass
{
    private:
    int x;
    int y;
    
    public:
    MyClass(int v1, int v2)
    {
        x = v1;
        y = v2;
    }
    void print() const
    {
        cout << x << " " << y << endl;
    }
    void moveX(int degistir)
    {
        x = degistir;
    }
};

int main()
{
    const MyClass class1(3,5);
    class1.print();
    // class1.moveX(7); class1 nesnesi const tanımlandığı için değer değişikliği yapmak hata verir.
    class1.print();
}
