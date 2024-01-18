#include <iostream>
using namespace std;

int main() {
   int S = 0;
   int N;
   cout<<"enter the limit"<<endl;
   cin>>N;
      for(int i=0;i< N;i++){
          
          //for printing the stars in the row.
          for(int j=1;j<=N-i;j++){
              cout<<"*";
          }
          
          //for printing the spaces in the row.
          for(int j=0;j<S;j++){
              cout<<" ";
          }
          
          //for printing the stars in the row.
          for(int j=1;j<=N-i;j++){
              cout<<"*";
          }
           S+=2;
          
       cout<<endl;   
      }
       S=2*N-2;
       for(int i=1;i< N;i++){
          
          //for printing the stars in the row.
          for(int j=1;j<=i;j++){
              cout<<"*";
          }
          
          //for printing the spaces in the row.
          for(int j=0;j<S;j++){
              cout<<" ";
          }
          
          //for printing the stars in the row.
          for(int j=1;j<=i;j++){
              cout<<"*";
          }
           S-=2;
          
       cout<<endl;   
      }
 return 0;     
}



/* 

enter the limit
6
************
*****  *****
****    ****
***      ***
**        **
*          *
*          *
**        **
***      ***
****    ****
*****  *****



*/
