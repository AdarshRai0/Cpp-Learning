#include<iostream>
using namespace std ;

int main(){
    char op ; float num1,num2;
    cout<<"Enter the operator :'+','-','/','*'";
    cin>>op;
    cout<<"Enter the two numbers "<<endl;
    cin>>num1>>num2;
    switch (op)
    {
    case '+':
    cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
        break;
    case '-':
    cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
        break;
    case '/':
    cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
        break;
    case '*':
    cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
        break;
    
    default: 
    cout<<"Sorry! These is invalid input. "<<endl;
        break;
    }

    return 0 ;
}