#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int x = 1;
    int y = 2;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if(i%2 == 1){
                cout<<x<<" ";
                x = x + 2;
            }
            else{
                cout<<y<<" ";
                y = y + 2;
            }
        }
        cout << endl;
    }
}