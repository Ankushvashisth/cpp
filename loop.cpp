#include<iostream>
using namespace std;
int main(){
    // for( int round = 1; round <= 5; round++){
    //     cout<<"Round "<<endl;
    // }
    // for(int num = 4; num <= 100; num= num+4)
    // cout<<num<<endl;
//    int i = 4;
//     while (i <= 100){
//         cout<<i<<" ";
//         i = i+4;

//     }

int sum = 0;
for(int i = 1; i <= 100;  i = i+2){
    sum = sum+i;
}
 cout<<sum;
}