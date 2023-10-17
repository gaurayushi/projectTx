// Online C++ compiler to run C++ program online
#include <iostream>
#include<math.h>
using namespace std;



int main() {
    double principal;
    double rate;
    double timee;
    double amount;
    double CI;
    cout<<"enter principal: rate:amount:time:"<<endl;
    cin>>principal;
    cin>>rate;
    cin>>amount;
    cin>>timee;
    cout<<"amount ="<<amount<<endl<<"principal="<<principal<<endl<<"rate="<<rate<<endl<<"time="<<timee<<endl;
    //calcuate the compound intrest 
    amount 
        = principal * ((pow((1 + rate / 100), timee))); 
     CI = amount - principal; 
    
    cout<<"compound intrest"<<"="<<CI<<endl;
    
    
  
    return 0;
}