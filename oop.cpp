#include <iostream>
using namespace std;
int main(){
    setlocale(LC_ALL,"Turkish");
    double s1, s2;
    double ort, top;
    cout << "1.Sayıyı Girin : ";
    cin >> s1;
    cout << "2.Sayıyı : ";
    cin >> s2;
    top = s1 + s2;
    ort = top / 2;
    cout << "Sayıların Toplamı : " << top << "\n";
    cout << "Sayıların Ortalaması : " << ort <<"\n";
    system("pause");
    return 0;
}