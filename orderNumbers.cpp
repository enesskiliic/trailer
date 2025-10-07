#include <iostream>
using namespace std;

int main(){
    for (int i = 1; i < 16; i++)
    {
        if (i >= 8 && i <= 12)
        {
            continue;
        }
        
        cout << i << " ";
    }
    
}