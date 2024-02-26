#include<iostream>
using namespace std ;
class Employee 
{
    private :
    int a,b,c;
    public:
    int d,e ;
    void setData(int a1, int b1 ,int c1);
    void getData(){
        cout<<"Enter the values of a "<<a<<endl; 
        cout<<"Enter the values of b "<<b<<endl; 
        cout<<"Enter the values of c "<<c<<endl; 
        cout<<"Enter the values of d "<<d<<endl; 
        cout<<"Enter the values of e "<<e<<endl; 
    } 
};
    void Employee :: setData (int a1, int b1, int c1 )
  { a = a1;
    b = b1;
    c = c1;
  }
int main(){
    Employee aryan ;
   // aryan.a = 26;
    aryan.d = 24;
    aryan.e = 766;
    aryan.setData(1,2,3);
    aryan.getData();
    return 0 ;
}