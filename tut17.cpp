#include<iostream>
using namespace std ;

int main(){
    
    int marks[] = {23,89,57,64,67,78,67} ;
    cout<<"These are value of marks"<<endl;
    for (int i = 0; i < 6 ; i++)
     { 
         cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
     }
     int mathmarks[4];
     mathmarks[0] = 2456;
     mathmarks[1] = 3456;
     mathmarks[2] = 7634;
     mathmarks[3] = 3456; 

mathmarks[3] = 455;
mathmarks[2] = 5555;
    cout<<"These are math marks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    return 0 ;
}