#include<iostream>
using namespace std ;

int aryan (int, int);

void rai();

int main(){
    
int num1 , num2;
     cout<<"Enter the first number."<<endl;
     cin>>num1; 
     
     cout<<"Enter the second number."<<endl;
     cin>>num2; 
     cout<<"The sum is "<<aryan(num1,num2)<<endl;
     rai();
    return 0 ;
}


int aryan(int a , int b ){
      int  c = a+b;
        return c ;   
}

void rai(){
    cout<<"Hello, Good Morning ";
}

