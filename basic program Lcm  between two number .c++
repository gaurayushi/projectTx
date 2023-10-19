 #include <iostream>
using namespace std;

  int main()
    {
         int n1, n2, max;

cout<<"Enter two positive integers: ";
    cin>>n1;
    cin>>n2;

    // maximum number between n1 and n2 is stored in max
    max = (n1 > n2) ? n1 : n2;

    while (1) {
        if ((max % n1 == 0) && (max % n2 == 0)) {
            cout<<"The LCM of"<< n1<<", "<< n2<<"="<< max;
            break;
        }
        ++max;
    }
         
         return 0;
    }
    
       
    
