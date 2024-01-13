// w.a.p to find the sum of digit
#include <iostream>
using namespace std;

int main() {
int number,sum=0;
int digit;
cout<<"enter number"<<endl;
cin>>number;
while(number>0)
{
digit=number%10;
sum=sum+digit;
number=number/10;
}
cout<<"sum of digit "<<"::"<<sum<<endl;

    
    
}
