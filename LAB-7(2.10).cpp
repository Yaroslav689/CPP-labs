#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cout << "Введіть розмір прямокутника (n > 1, n < 166): ";
    cin >> n;
    
    if (n <= 1) {
        cout << "Розмір має бути більшим за 1" << endl;
        return 0;
    }
    if (n > 165) {
        cout << "Розмір має бути меншим за 166" << endl;
        return 0;
    }
    
    cout << '+';
    for (int i = 0; i < n - 2; i++) {
         cout << '-';
    }
    cout << '+' << endl;
    
    for (int i =0; i < n - 2; i++) {
        cout << '|';
        for (int k = 0; k < n - 2; k++) {
            cout << ' ';
        }
        cout << '|' << endl;
    }
    
    cout << '+';
    for (int i = 0; i < n - 2; i++) {
        cout << '-';
    }
    cout << '+' << endl;
    
    return 0;
}