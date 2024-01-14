// write a program to print half diamond
#include <iostream>
using namespace std;

int main() {
    int N;
    cout<<"enter the limit"<<endl;
    cin>>N;
   /* printing first pattern*/
    
    for (int i = 0; i <= N; i++)
    {
        
for(int j=0;j<=i;j++)
     {
         
        cout<<"*";
        
    }
        cout << endl;
    }
  
  
  /*printing second pattern  */
    for (int i = 0; i <= N; i++)
    {
        
for(int j=N;j>=i;j--)
     {
         
        cout<<"*";
        
    }
        cout << endl;
    }
  
  return 0;
}
