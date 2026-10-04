#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a = 2.3;
    double b = 2.3;
    double c = 2.123456;
    double d = 2.123456;
    double e = 2.123456;
    
    cout << a << endl;
    cout << fixed << setprecision(2) << b << endl;
    cout << fixed << setprecision(6) << c << endl;
    cout << fixed << setprecision(2) << d << endl;
    cout << fixed << setprecision(0) << e << endl;
    
    return 0;
}