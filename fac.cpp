#include <iostream>
using namespace std;
int main()
{
    int a, digit, sum = 0; 
    cin>>a;
    while(a>0){
        digit = a % 10;
        sum = sum + digit;
        a = a / 10;
    }
    cout<<sum<<endl;
    }
