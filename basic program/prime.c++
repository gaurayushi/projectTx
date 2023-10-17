#include <iostream>
   
using namespace std;

int main() {
   


  int n, i, flag = 0;
  cout<<"Enter a positive integer: "<<endl;
  cin>>n;
// o and 1 are not prime number 
//so change flag to 1 for not prime number
if (n==0 || n==1)
flag=1;
for(i=2;i<=n/2;++i)
{
    //if n is divisble by i then n is not prime 
    //number  change flag to 1 for non prime number
    
    if(n%i==0)
    {
        flag=1;
        break;
        
    }
   
}
//flag =0   for prime number
if(flag==0)
 {
     cout<<"is prime  number "<<endl;
     
 }
 else
 {
     cout<<"is  not PRIME NUMBER"<<endl;
     
 }


  return 0;

    
}
