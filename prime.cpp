#include <iostream>
using namespace std;
int main()
{
    for (int n = 1; n <= 100; n++)
    {
        int a = 0;
        if (n < 1)
        {
            cout << " n not a valid  no. : " << n << endl;
        }
        else
        {
            for (int i = 2; i <= n / 2; i++)
            {
                if (n % i == 0)
                {
                    cout << " n is not a prime : " << n << endl;
                    a = 1;
                    break;
                }
            }

            if (a == 0)
            {
                cout << "n  is prime : " << n << endl;
            }
        }
    }
}
