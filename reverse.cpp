#include<iostream>
using namespace std;
int main(){
    int i , revs = 0;
    cout<<"enter number:"<<endl;
    cin>>i;

    // while(i>0){
    //     revs = (revs*10) + i%10 ;
    //     i = i /10;
    //     cout<<revs<<endl;
    // }
    for(; i>0; i = i/10)
    revs = revs*10 + i%10;
      cout<<revs<<endl;

}