#include <iostream>
using namespace std;

int main()
{
    int N;
    
    cout << "Введіть трицифрове число: ";
    cin >> N;
    
    if (N < 100 || N > 999) {
        cout << "Хибне значення";
    }
    else {
        int count = 0;
        int a = N / 100;
        int b = (N / 10) % 10;
        int c = N % 10;
    
        if (a < 7) count++;
        if (b < 7) count++;
        if (c < 7) count++;
    
        cout << "Кількість цифр, що менші за 7: " << count << endl;
    }
    
    return 0;
}