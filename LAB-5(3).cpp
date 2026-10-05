#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, h, x, y;
    double eps = 0.000000001;

    cout << "Введіть a: ";
    cin >> a;
    cout << "Введіть b: ";
    cin >> b;
    cout << "Введіть крок h: ";
    cin >> h;

    if (h <= 0 || a > b)
    {
        cout << "Хибно введені дані: h > 0 та a <= b" << endl;
        return 0;
    }

    cout << "-----------------------------" << endl;
    cout << ":      X      :      Y      :" << endl;
    cout << "-----------------------------" << endl;

    x = a;
    while (x <= b + eps)
    {
        if (x > eps)   
        {
            cout << "x = " << x << " не належить ОДЗ (x <= 0). Виведення припинено." << endl;
            return 0;
        }

        y = sin(x) + sqrt(-x);

        cout << ": " << setw(11) << fixed << setprecision(2) << x
             << " : " << setw(11) << y << " :" << endl;
        cout << "-----------------------------" << endl;

        x += h;
    }

    return 0;
}