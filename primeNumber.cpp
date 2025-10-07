#include <iostream>
using namespace std;

int main(){

    int number;

    cout << "Please enter a number: " << endl;

    cin >> number;

    if (number <= 1){
    cout << "Your number is not a prime number." << endl;
    return 0;

    }

    for (int i = 2; i * i <= number; i++){
        if (number % i == 0){
            cout << "Your number is not a prime number." << endl;
            return 0;
        }
    }
    
    cout << "Your number is a prime number." << endl;
    return 0;

}