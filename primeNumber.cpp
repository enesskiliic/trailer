#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "Please Enter a Number: " <<"\n";
    cin >> number;
    if (number<=1)
    cout << "Your number is not a Prime Number..";
    for (int i=2 ; i*i<=number ; i++){
        if (number % i == 0){
        cout << "Your Number is not a Prime Number..";
        break;}
    else{
    cout << "Your number is a Prime Number..";
    break;
    }
    }
}