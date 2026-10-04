#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b;
    float epsilon = 0.000001f;
    
    cout << "Enter two integers: ";
    cin >> a >> b;
    
    float x1 = 1.0f / a;
    float x2 = 1.0f / b;
    
    if (fabs(x1 - x2) < epsilon) {
        cout << "Results are equal (by 0.000001 epsilon)" << endl;
    }
    else {
        cout << "Results are not equal (by 0.000001 epsilon)" << endl;
    }
    
    return 0;
}