#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a = 2;
    double b = 19.03;
    double x = a / b;
    double z = b / a;
    
    double numerator = 4.3 * sin((x + 1) * M_PI);
    double denominator = z * 1 - cos((x-1)*M_PI) + log(b);
    
    double y = numerator / denominator;
    
    cout << "y = " << y << endl;
    
    return 0;
}