#include <iostream>
using namespace std;

struct Date {
        int hours = 0;
        int minutes = 0;
};
    
int main()
{
    Date d;
    int addMinutes;
    
    cin >> d.hours >> d.minutes >> addMinutes;
    
    if (d.hours < 0 || d.hours >= 24 || d.minutes < 0 || d.minutes >= 60 || addMinutes < 0) {
        cout << "Некоректно введені дані" << endl;
        return 1;
    }
    
    int total = d.hours * 60 + d.minutes + addMinutes;
    
    Date result;
    result.hours = (total / 60) % 24;
    result.minutes = total % 60;
    
    cout << result.hours << ":";
    if (result.minutes < 10) {
        cout << "0";
    }
    cout << result.minutes << endl;
    
    return 0;
}