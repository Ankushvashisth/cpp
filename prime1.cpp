#include<iostream>
using namespace std;
int main(){
    int n, a = 0;
    cout<<"Enter a num: "<<endl;
    cin>>n;
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
