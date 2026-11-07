#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    const int n = 10;
    int m[n];
    int temp;
    int minIndex = 0;
    int maxIndex = 0;
    int isUnique;
    
    srand(time(0));
    
    for (int i = 0; i < n; i++) {
        isUnique = 0;
        while (isUnique == 0) {
            m[i] = rand() % 100;
            isUnique = 1;
            for (int k = 0; k < i; k++) {
                if (m[k] == m[i]) {
                    isUnique = 0;
                }
            }
        }
    }
    
    cout << "масив m: {";
    for (int i = 0; i < n; i++) {
        if (i > 0) {
            cout << ", ";
        }
        cout << m[i];
    }
    cout << "}" << endl;
    
    for (int i = 0; i < n; i++) {
        if (m[i] < m[minIndex]) {
            minIndex = i;
        }
        if (m[i] > m[maxIndex]) {
            maxIndex = i;
        }
    }
    
    temp = m[minIndex];
    m[minIndex] = m[maxIndex];
    m[maxIndex] = temp;
    
    cout << "масив m після заміни: {";
    for (int i = 0; i < n; i++) {
        if (i > 0) {
            cout << ", ";
        }
        cout << m[i];
    }
    cout << "}" << endl;
    
    return 0;
}