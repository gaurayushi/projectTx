#include <iostream>

using namespace std;



int main() {
    
   int year; 
   cout<<"enter year"<<endl;
   cin>>year;
    if((year!=100  &&  year%400==0) ||(year%4==0))
     {
        cout<<"leap year"<<year<<endl;
     }
     
     
     else
     {
         cout<<"Not leap year"<<year<<endl;
         
     }
    
  
   return 0;
   
  
}