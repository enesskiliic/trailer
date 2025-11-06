#include <iostream>
using namespace std;

class MyClass
{
    private:
    int hr;
    
    public:
    
    void setHour(int hour)      // private olan hr değişkenini, public setHour
    {                           // fonksiyonunu kullanarak değiştirebiliyoruz.
        if (hour >= 0 && hour < 24)
        {
            hr = hour;
        } else hr = 0;
    }

    int getHour()               // private olan hr değişkenine, public getHour
    {                           // fonksiyonu ile erişebiliyoruz.
        return hr;
    }
};

int main()
{
    MyClass myObj;
    myObj.setHour(11);
    cout << myObj.getHour() ;
    return 0;
}