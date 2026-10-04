#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a = 3;
    double b = 0.521;
    double z = b/a;

    double numerator = 0.127 * exp(z);
    double denominator = 1 - cbrt(cos(z*M_PI));
    
    double y = cbrt(pow(numerator/denominator, 2));
    
    cout << "y = " << y << endl;
    
    return 0;
}