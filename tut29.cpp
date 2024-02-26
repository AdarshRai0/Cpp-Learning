#include<iostream>
using namespace std ;
  
class shop 
{
    int counter;
    int itemId[100];
    int itemPrice[100];
    public:
    void initCounter(void) {counter = +1 ;}
    void setPrice(void);
    void displayItem(void); 

};
void  shop ::setPrice(void)
{
    
    cout<<"Enter the number of itemId "<<endl;
    cin>>itemId[counter];
    cout<<"Enter the number of itemPrice"<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void shop::displayItem(void)
{
    for (  int i = 0; i < counter; i++)
    {
        cout<<"Your item id is "<<itemId[i]<<"and your itemPrice is"<<itemPrice[i]<<endl;
        
    }
    
}


int main(){
   
     
     shop SR;
     SR.initCounter();
     SR.setPrice();
     SR.setPrice();
     SR.setPrice();
     SR.displayItem();
     
    return 0 ;
}