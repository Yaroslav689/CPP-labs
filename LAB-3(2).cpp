#include <iostream>
using namespace std;

int main()
{
    int number;
    
    cout << "Введіть номер студента: ";
    cin >> number;
    
    switch (number) {
        case 1:
           cout <<"Ім'я: Антон; середній бал: 4.7" << endl;
           break;
        case 2:
           cout <<"Ім'я: Олег; середній бал: 4.4" << endl;
           break;
        case 3:
           cout <<"Ім'я: Олександр; середній бал: 4.3" << endl;
           break;
        case 4:
           cout <<"Ім'я: Світлана; середній бал: 4.8" << endl;
           break;
        case 5:
           cout <<"Ім'я: Тарас; середній бал: 5" << endl;
           break;
        case 6:
           cout <<"Ім'я: Сергій; середній бал: 4.3" << endl;
           break;
        case 7:
           cout <<"Ім'я: Катерина; середній бал: 4.3" << endl;
           break;
        default: 
           cout << "Студент з таким номером відсутній" << endl;
    }
    return 0;
}