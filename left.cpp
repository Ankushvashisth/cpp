#include <iostream>
using namespace std;
int main()
{
    int rows = 10;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (i >= j) {
                cout << " * ";
            } else {
                cout <<" $ ";
            }
        }
        cout << endl;
    }
}