#include <iostream>
using namespace std;


int main() {
  
  int n;
  int sum;
  int firstdigit;
  int lastdigit;
  cout<<"enter the limit"<<endl;
  cin>>n;
  lastdigit=n%10;
   while(n>=10)
   {
  n=n/10;
   }
   firstdigit=n;
  sum=firstdigit+lastdigit;
  cout<<"sum of first and last digit"<<sum<<endl;
  
   
  
 
    return 0;
}
