#include <iostream>
using namespace std;

int main()
{
    int n;
    int product = 1;
    int number;
    
    cout << "Введіть число: ";
    cin >> n;
    
    while (n > 0) {
        number = n % 10;
        if (number != 7 ) {
            product *= number;
        }
        n = n / 10;
    }
    
    cout << "Добуток: " << product << endl;
    
    return 0;
}