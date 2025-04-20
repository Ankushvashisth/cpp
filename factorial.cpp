#include <iostream>
using namespace std;
int main()
{
    int a, fact = 1;
    int i = 1;
    cout << "Enter a num: " << endl;
    cin >> a;
    // for(int i = 1; i <=a; i++){
    //     fact = fact * i ;
    //     cout<<fact<<endl;
    // }
    while (i <= a)
    {
        fact = fact * i;
        i++;
       
    }
    cout << fact << endl;
}