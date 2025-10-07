#include <iostream>
using namespace std;

// Implement the function
bool check_prime(int);

int main() {
    cout << (!check_prime(1) ? "Passed Test 1" : "Failed Test 1 !!!") << endl;
    cout << (check_prime(2) ? "Passed Test 2" : "Failed Test 2 !!!") << endl;
    cout << (check_prime(3) ? "Passed Test 3" : "Failed Test 3 !!!") << endl;
    cout << (!check_prime(4) ? "Passed Test 4" : "Failed Test 4 !!!") << endl;
    cout << (check_prime(53) ? "Passed Test 5" : "Failed Test 5 !!!") << endl;

    return 0;
}