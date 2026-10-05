#include <iostream>
#include <cmath>
using namespace std;

double calculateY(double x) {
    return pow(sin(x),5) + fabs(5 * x - 1.5);
}

int main()
{
    int N = 5;
    double x, y;
    
    cout << "Введіть " << N << " значень x: " << endl;
    
    for (int i = 1; i <= N; i++) {
        cout << "x" << i << " = ";
        cin >> x; 
        
        y = calculateY(x);
        cout << "Зі значенням x = " << x << "; y = " << y << endl;
    }
    
    return 0;
}