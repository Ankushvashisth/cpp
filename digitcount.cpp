#include <iostream>
using namespace std;
int main()
{
    int x = 0;
    int n = 3567;
    while (n >0)
    {
        x++;
        n= n/10;
    }
        cout << "Number of digit: " << x << endl;
 

}