#include <iostream>
using namespace std;

int main()
{
    int n;
    int m[100];
    
    cout << "Введіть розмір масиву (n >= 1; n <= 100): ";
    cin >> n;
    
    if (n < 1 || n > 100) {
        cout << "хибне значення n";
        return 0;
    }
    
    for (int i = 0; i < n; i++) {
        cin >> m[i];
    }
    
    cout << "Масив m до: {";
    for (int i = 0; i < n; i++) {
        if (i > 0) {
            cout << ", ";
        }
        cout << m[i];
    }
    cout << "}" << endl;
    
    int max = m[0];
    int maxIndex = 0;
    
    for (int i = 1; i < n; i++) {
        if (m[i] > max) {
            max = m[i];
            maxIndex = i;
        }
    }
    
    for (int i =0; i < maxIndex; i++) {
        if (m[i] < 0) {
            m[i] = 0;
        }
    }
    
    cout << "Масив m після: {";
    for (int i = 0; i < n; i++) {
        if (i > 0) {
            cout << ", ";
        }
        cout << m[i];
    }
    cout << "}" << endl;
    
    return 0;
}