
//Program to Convert to convert reverse of number 

#include <iostream>
using namespace std;

  int main()
    {
        int n,rev=0,remainder;
        
        cout<<"enter the number"<<endl;
        cin>>n;
        while(n!=0)
         {
             remainder =n%10;
             rev=rev*10+remainder;
             n=n/10;
             
         }
         cout<<"::"<<"rev number"<<"::"<<rev;
         
         return 0;
    }
    
       
