 #include<iostream>
using namespace std;
 
 
 
 int main()
 {
    int num1,num2;
    cout<<"Enter the value of num 1:\n"; /*<< this is called insertion operator*/
    cin>>num1;  /*>> tihs is called extraction operator */
    cout<<"Enter the value of num 2:\n"; /*<< this is called insertion operator*/
    cin>>num2;      /*>> tihs is called extraction operator */
    cout<<"The sum is "<<num1-num2<<endl;
    cout<<"The sum is "<<num1+num2<<endl;
    cout<<"The sum is "<<num1*num2<<endl;
    cout<<"The sum is "<<num1%num2<<endl;
    return 0;
 }
 