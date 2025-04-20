#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter year :" << endl;
    cin >> year;
    if (year < 1000)
    {
        cout << "invalid year" << endl;
    }else{
        if (year % 4 == 0)
        {
            cout << "It's a leap year" << endl;
        }
        else
        {
            cout << "Not a leap year" << endl;
        }
    }
}

