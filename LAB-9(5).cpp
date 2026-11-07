#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    const int n = 10;
    int m[n];
    int x;
    int isUnigue;
    
    srand(time(0));
    
    for (int i = 0; i < n; i++) {
        isUnigue = 0;
        while(isUnigue == 0) {
            x = rand() % 100;
            isUnigue = 1;
            for (int j = 0; j < i; j++) {
                if (m[j] == x) {
                    isUnigue = 0;
                }
            }
        }
        m[i] = x;
    }
    
    cout << "масив m: {";
    for (int i = 0; i < n; i++) {
        if (i > 0) {
            cout << ", ";
        }
        cout << m[i];
    }
    cout << "}" << endl;
    
    int max = m[0];
    for (int i = 1; i < n; i++) {
        if (m[i] > max) {
            max = m[i];
        }
    }
    
    int second = -1;
    for (int i = 0; i < n; i++) {
        if (m[i] != max && m[i] > second) {
            second = m[i];
        }
    }
    
    cout << "Другий по величині елемент масиву: " << second << endl;

    return 0;
}