#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"enter the limit"<<endl;
    cin>>num;
    for(int i=1;i<=num;i++)
    {
    for( int j=1;j<=i;j++)
    {
        
        cout<<j;
    }


    for( int j=1;j<=num-i;j++)
    {
        
        cout<<"  ";
    }



    for( int j=i;j>=1;j--)
    {
        
        cout<<j;
    }
    
    
    cout<<endl;


    }
    
    return 0;
}


/* 
enter the limit
6
1          1
12        21
123      321
1234    4321
12345  54321
123456654321


*/
