#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    const int n = 10;
    int m[n];
    int index = -1;
    
    srand(time(0));
    
    for (int i = 0; i < n; i++) {
        m[i] = rand() % 10;
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
        if (m[i] == 0) {
            index = i;
            break;
        }
    }
    
    if (index == -1) {
        cout << "Масив не містить 0" << endl;
    }
    else {
        cout << "Індекс першого нульового елемента: " << index << " (Номер: " << index + 1 << ")" << endl;
    }
    
    return 0;
}