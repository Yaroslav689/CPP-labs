#include <iostream>
using namespace std;

int main()
{
    const int m = 4, n = 7;
    int k[m][n] = {
        {5, 8, 5, 10, 3, 5, 3},
        {3, 9, 3, 4, 2, 5, 6},
        {1, 2, 4, 9, 2, 4, 2},
        {6, 3, 5, 7, 8, 2, 5},
    };
    
    int min = k[0][0];
    int minI = 0, minJ = 0;
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (k[i][j] < min) {
                min = k[i][j];
                minI = i;
                minJ = j;
            }
        }
    }
    
    cout << "Найменший елемент: " << min << endl;
    cout << "Номер рядка: " << minI+1 << "; Номер стовпця: " << minJ+1 << endl;
    
    return 0;
}