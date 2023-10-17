// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;



int main() {
   int first;
   int  second;
   cout<<"enter the first number for swapping"<<endl;
   cin>>first;
   cout<<"enter the second number"<<endl;
   cin>>second;
   
   
   cout<<"before swap "<<first<<","<<second<<endl;
   first=first+second; //2+3=5 first=5
   second=first-second; // 5-3 //second=2
   first=first-second;//5-2 //first =3
   cout<<"afther swaap"<<first<<","<<second<<endl;
   
   
   
    
  
    return 0;
}