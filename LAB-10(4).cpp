#include <iostream>
using namespace std;

int main()
{
    const int m = 4, n = 6;
    int k[m][n] = {
        {5, 8, 5, 9, 1, 2},
        {3, 9, 3, 4, 9, 2},
        {8, 2, 1, 1, 4, 5},
        {12, 4, 7, 2, 1, 4},
    };
    
    cout << "Сума елементів у стовпцях:" << endl;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum += k[j][i];
        }
        cout << "Стовпець " << i+1 << ": " << sum << endl;
    }
    return 0;
}