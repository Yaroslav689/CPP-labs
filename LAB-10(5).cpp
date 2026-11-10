#include <iostream>
using namespace std;

int main()
{
    const int m = 3, n = 4;
    int k[m][n] = {
        {5, 8, 5, 10},
        {3, 9, 3, 4},
        {8, 2, 1, 1},
    };
    
    int max = k[0][0];
    int maxI = 0, maxJ = 0;
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (k[i][j] > max) {
                max = k[i][j];
                maxI = i;
                maxJ = j;
            }
        }
    }
    
    cout << "Найбільший елемент: " << max << endl;
    cout << "Номер рядка: " << maxI+1 << "; Номер стовпця: " << maxJ+1 << endl;
    
    return 0;
}