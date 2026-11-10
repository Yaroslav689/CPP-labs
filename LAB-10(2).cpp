#include <iostream>
using namespace std;

int main()
{
    const int m = 6, n = 4;
    int k[m][n] = {
        {5, 8, 5, 9},
        {3, 9, 3, 4},
        {8, 2, 1, 1},
        {12, 4, 7, 2},
        {2, 6, 7, 3},
        {1, 1, 5, 5}
    };
    
    cout << "Кількість парних чисел у стовпцях:" << endl;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < m; j++) {
            if (k[j][i] % 2 == 0){
                count++;
            }
        }
        cout << "Стовпчик " << i+1 << ": " << count << endl;
    }
    return 0;
}