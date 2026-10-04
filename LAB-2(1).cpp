#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x = 2;
    double y;
    
    if (x <= 1) {
        y = 0.5 * cos(x) + 4 * x;
    }
    else if (x < 0) {
        y = 0.25 * pow(x,4) + 2 * pow(x,2);
    }
    else if (x > 1) {
        y = 0.9 * sqrt(x) - 0.8 * x;
    }
    
    cout << "y = " << y << endl;
}