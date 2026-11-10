#include <iostream>
using namespace std;

int main()
{
    const int m =4, n = 3;
    int k[m][n] = {
        {5, 8, 2},
        {3, 9, 10},
        {8, 2, 1},
        {12, 4, 4}
    };
    
    cout << "Кількість парних чисел у рядках:" << endl;
    for (int i = 0; i < m; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (k[i][j] % 2 == 0){
                count++;
            }
        }
        cout << "Рядок " << i+1 << ": " << count << endl;
    }
    return 0;
}