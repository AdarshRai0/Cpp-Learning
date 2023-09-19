#include<iostream>
using namespace std;
// There are two types of header files.
// 1.system header files: its comes with the compiler.
// 2.use defined header files:its written by the programer.
int main()
{
    int a=2,b=3;
cout<<"operator in c++"<<endl;
    cout<<"following are the types of operator in c++"<<endl;
    // Arthimetic operators
    cout<<"The value of 2 + 3 is "<<a+b<<endl;
    cout<<"The value of 2 - 3 is "<<a-b<<endl;
    cout<<"The value of 2 * 3 is "<<a*b<<endl;
    cout<<"The value of 2 / 3 is "<<a/b<<endl;
    cout<<"The value of 2 % 3 is "<<a%b<<endl;
cout<<endl;
cout<<"The value of 2 ++ is "<<a++<<endl;
cout<<"The value of 2 -- is "<<a--<<endl;
cout<<"The value of --2 is "<<--a<<endl;
cout<<"The value of ++2 is "<<++a<<endl;
cout<<"The value of 2++ is "<<a++<<endl;
cout<<"The value of ++2 is "<<++a<<endl;
cout<<"The value of --2 is "<<--a<<endl;
cout<<endl;




    cout<<"following are the comparison operator in c++"<<endl;

    cout<<"The value of 2 == 3 is "<<(a==b)<<endl;
    cout<<"The value of 2 != 3 is "<<(a!=b)<<endl;
    cout<<"The value of 2 <= 3 is "<<(a<=b)<<endl;
    cout<<"The value of 2 >= 3 is "<<(a>=b)<<endl;
    cout<<"The value of 2 < 3 is "<<(a<b)<<endl;
    cout<<"The value of 2 > 3 is "<<(a>b)<<endl;
    cout<<endl;


    cout<<"Following are the logical operator in c++"<<endl;
    cout<<"The value of logical and operator  ((a==b) && (a<b))  is: "<<((a==b)  && (a>b))<<endl;
    cout<<"The value of logical or operator ((a==b) || (a<b))is:"<<((a==b)  || (a<b))<<endl;
    cout<<"The value of logical not operator (!(a==b)) is :"<<(!(a==b))<<endl;
    
    return 0;
}

