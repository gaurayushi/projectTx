
#include <iostream>
using namespace std;



    float farh(float f)
    {
        return ((f- 32.0)*5.0/9.0); //formula
        
    }
    int main()
     {
         float f;
         cin>>f;
         cout<<"temp in celsius "<<farh(f);
     
         return 0;
    
    
  
       
    }
    //Complexity Analysis
//Time Complexity: O(1)
  
