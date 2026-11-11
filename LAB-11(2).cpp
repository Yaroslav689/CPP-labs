#include <iostream>
using namespace std;

struct Date {
        int hours = 0;
        int minutes = 0;
};
    
int main()
{
    Date start, end;
    
    cin >> start.hours >> start.minutes >> end.hours >> end.minutes;
    
    if (start.hours < 0 || start.hours >= 24 || start.minutes < 0 || start.minutes >= 60 ||
    end.hours < 0 || end.hours >= 24 || end.minutes < 0 || end.minutes >= 60) {
        cout << "Некоректно введені дані" << endl;
        return 1;
    }
    
    int startTotal = start.hours * 60 + start.minutes;
    int endTotal = end.hours * 60 + end.minutes; 
    int diff = endTotal - startTotal;
    if (diff < 0) {
        diff = diff + 24 * 60;
    }
    
    Date result;
    result.hours = diff/60;
    result.minutes =  diff%60;
    
    cout << result.hours << ":" << result.minutes << endl;
    
    return 0;
}