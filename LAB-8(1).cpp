#include <iostream>
using namespace std;

int main()
{
    int m[12] = {-2, 5, 31, 0, -9, 43, 11, 14, 25, 6, -4, 1};
    int temp;
    
    cout << "Масив m: {";
    for (int i = 0; i < 12; i++) {
        if (i > 0) {
            cout << ", ";
        }
        cout << m[i];
    }
    cout << "}" << endl;
    
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 11 - i; j++) {
            if (m[j] > m[j+1]) {
                temp = m[j];
                m[j] = m[j + 1];
                m[j + 1] = temp;
            }
        }    
    }
    
    cout << "Упорядкований за зростанням масив m: {";
    for (int i = 0; i < 12; i++) {
        if (i > 0) {
            cout << ", ";
        }
        cout << m[i];
    }
    cout << "}" << endl;
    
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 11 - i; j++) {
            if (m[j] < m[j+1]) {
                temp = m[j];
                m[j] = m[j + 1];
                m[j + 1] = temp;
            }
        }    
    }
    
    cout << "Упорядкований за спаданням масив m: {";
    for (int i = 0; i < 12; i++) {
        if (i > 0) {
            cout << ", ";
        }
        cout << m[i];
    }
    cout << "}" << endl;
    
    return 0;
}