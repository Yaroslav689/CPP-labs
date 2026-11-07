#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    const int n = 10;
    int m[n];
    int A;
    int count = 0;
    
    srand(time(0));
    
    for(int i = 0; i < n; i++) {
        m[i] = rand() % 100;
    }

    cout << "масив m: {";
    for (int i = 0; i < n; i++) {
        if (i > 0) {
            cout << ", ";
        }
        cout << m[i];
    }
    cout << "}" << endl;
    
    cout << "Введіть число A: ";
    cin >> A;
    
    for(int i = 0; i < n; i++) {
        if (m[i] > A) {
            count++;
        }
    }
    
    cout << "Кількість елементів, більших за " << A << ": " << count << endl;
    
    return 0;
}