#include <iostream>
using namespace std;
int main()
{
    int num, dgt = 0;
    cout << "Enter num: " << endl;
    cin >> num;
    while (num != 0)
    {
        num = num / 10;
        dgt = dgt + 1;
    }
        cout << "Number of digit: " << dgt << endl;

}