#include<iostream>
using namespace std ;

int main(){
    double n1,n2,n3;
    cout<<"Enter the three numbers to clarify your dhout "<<endl;
    cin>>n1>>n2>>n3;
    if(n1>=n2  && n1>=n3)
    cout<<"The largest number is "<<n1<<endl;
    else if(n2>=n1 && n2>=n3)
    cout<<"The largest number is "<<n2<<endl;
    else
    cout<<"The largest number is "<<n3<<endl;
    return 0 ;
}