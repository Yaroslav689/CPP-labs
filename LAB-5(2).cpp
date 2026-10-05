#include <iostream>
using namespace std;

int main()
{
    double product = 1;
    
    for (int i = 3; i <= 100; i++) {
        if (i % 3 == 0) {
            product *= i;
        }
    }
    
    cout << "Добуток чисел, кратних 3 і не більших за 100: " << product << endl;

    return 0;
}