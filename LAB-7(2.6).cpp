#include <iostream>
using namespace std;

int main()
{
    int c0;
    int steps = 0;

    cout << "Введіть число (с0 > 0): ";
    cin >> c0;

    while (c0 != 1)
    {
        if (c0 % 2 == 0)
        {
            c0 = c0 / 2;
        }
        else
        {
            c0 = 3 * c0 + 1;
        }

        cout << c0 << endl;
        steps = steps + 1;
    }

    cout << "steps = " << steps << endl;

    return 0;
}