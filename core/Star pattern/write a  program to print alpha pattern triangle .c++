#include <iostream>
using namespace std;

int main() {
  int n;

    cout<<"enter the limit"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    for( char ch=('A'+n-1)-i;ch<='A'+n-1;ch++)
    {
        
        cout<<ch<<" ";

    }
    cout<<endl;


    }
    
    return 0;
}

/* 
enter the limit
6
F 
E F 
D E F 
C D E F 
B C D E F 
A B C D E F 


*/
