#include <iostream>
using namespace std;

int main()
{
    const int m = 3, n = 3;
    int k[m][n] = {
        {5, 8, 5},
        {3, 9, 3},
        {1, 2, 4},
    };
    
    int sumMainDiag = 0;
    int sumSideDiag = 0;
    
    for (int i = 0; i < m; i++) {
        sumMainDiag += k[i][i];
        sumSideDiag += k[i][n-1-i];
    }
    
    cout << "Сума головної діагоналі: " << sumMainDiag << endl;
    cout << "Сума побічної діагоналі: " << sumSideDiag << endl;
    cout << "Сума чисел по діагоналям: " << sumMainDiag+sumSideDiag-k[1][1] << endl;
    
    return 0;
}