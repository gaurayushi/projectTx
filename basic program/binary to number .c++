// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;



int main() {
    
   int N; 
   cout<<"enter th number"<<endl;
   cin>>N;
   
  
    // Initializing base value a to 1 
    int a = 1; 
    int ans = 0; 
    while (N != 0) { 
        ans = ans + (N % 10) * a; 
        N = N / 10; 
        a = a * 2; 
    }
   cout<<"the binary to number conversion"<<ans<<endl;
   return 0;
   
  
}