#include <iostream>
   
using namespace std;

int main() {
   
   int i,n;
   int storefact=1;
   
   cout<<"enter the number"<<endl;
   cin>>n;
   for(i=1;i<=n;i++)
   {
       storefact=i*storefact;
      
       
   }
cout<<"factorial of !!!!"<<endl;
cout<<storefact<<endl;
  return 0;

    
}