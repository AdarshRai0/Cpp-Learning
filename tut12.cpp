
#include<iostream>
using namespace std ;

int main(){
    double num;
    cout<<"Enter the number to form a table "<<endl;
    cin>>num;
   // for(int i = 1; i <= 10 ;i++)
    for( int i=1 ; i <= 10 ;i++)
    {
        cout<<num <<" x "<< i <<" = "<< num*i<<endl;

    }
    return 0 ;
}