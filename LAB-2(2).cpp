#include <iostream>

using namespace std;

int main()
{
    double x = 0.4;
    double y = 0.6;
    
    bool circle = (x <= 0 && y <= 0 && x*x + y*y <= 1);
    bool triangle = (x >= 0 && y >= 0 && x+y <= 1);
    
    if (circle || triangle) {
        cout << "dot is inside the area";
    }
    else {
        cout << "dot is outside the area";
    }
    
    return 0;
}