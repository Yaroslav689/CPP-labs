#include <iostream>
using namespace std;

int main()
{
    const int m = 5, n = 7;
    int k[m][n] = {
        {5, 8, 5, 9, 1, 2, 3},
        {3, 9, 3, 4, 9, 2, 1},
        {8, 2, 1, 1, 4, 5 ,1},
        {12, 4, 7, 2, 1, 4, 6},
        {2, 6, 7, 3, 10, 2, 1}
    };
    
    cout << "Сума елементів у рядках:" << endl;
    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += k[i][j];
        }
        cout << "Рядок " << i+1 << ": " << sum << endl;
    }
    return 0;
}