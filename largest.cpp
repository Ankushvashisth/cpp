#include<iostream>
using namespace std;
int main() {
    int a, b, c;
    cout<<"first no."<<endl;
    cout<<"second no"<<endl;
    cout<<"third no"<<endl;
    cin >>a >>b >> c;

    if(a > b && a > c) {
        cout << a <<endl;
    } else if(b > a && b > c) {
        cout << b <<endl;

    } else {
        cout <<"c is largest no." <<c <<endl;
    }
}
