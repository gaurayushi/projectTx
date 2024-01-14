///creating program on right half pyramid 

/* 
*           |   1           |   A
* *         |   1 2         |   A B
* * *       |   1 2 3       |   A B C
* * * *     |   1 2 3 4     |   A B C D
* * * * *   |   1 2 3 4 5   |   A B C D E
*/

#include <iostream>
using namespace std;

void AlphabetPattern(int n) {  //function declare
    int i, j;
    i = 1;
    while (i <= n) {
        j = 1;
        while (j <= i) {
            char ch = 'A' + j - 1;
            cout << ch;
            j = j + 1;
        }
        i = i + 1;
        cout << endl;
    }
}

void StarPattern(int n) {   //function declare
    int i, j;
    i = 1;
    while (i <= n) {
        j = 1;
        while (j <= i) {
            cout << "*";
            j = j + 1;
        }
        i = i + 1;
        cout << endl;
    }
}

void NumberPattern(int n) {  //function declare
    int i, j;
    i = 1;
    while (i <= n) {
        int count = 1;
        j = 1;
        while (j <= i) {
            cout << count;
            count = count + 1;
            j = j + 1;
        }
        i = i + 1;
        cout << endl;
    }
}

int main() {
    int limit;
    cout << "Enter the limit: ";
    cin >> limit;

    cout << "\nAlphabet Pattern:\n";
    AlphabetPattern(limit);  //function call

    cout << "\nStar Pattern:\n";
    StarPattern(limit);    //function call

    cout << "\nNumber Pattern:\n";
    NumberPattern(limit);    //function call

    return 0;
}


/* 
Algorithm :|
alphabet pattern algorithm
step 1:  read the input n
step 2:  initalzie the variable i=1
step 3:  while i is less then n 
follow)  
step 3.1  initialize j =1  and j is less then i 
step 3.2     calculate the  pattern followed  using the formula 'A' + 'j' - 1.
 step 3.3  store that pattern in char ch = 'A' + 'j' - 1. (type casting used to convert number into character)
step 3.4 print the character 
step 3.5 Increment 'j'.
 step 4   Increment 'i'.
step 4.1 Print a newline.
step 5:  End.

algorithm  star pattern 
step 1:  read the input n
step 2:  initalzie the variable i=1
step 3:  while i is less then n 
follow)  
step 3.1  initialize j =1  and j is less then i 
step 3.2 print the star (*) 
step 3.3 Increment 'j'.
 step 4  Increment 'i'.
step 4.1 Print a newline.
step 5:  End.


 algorithm print number 
step 1:  read the input n
step 2:  initalzie the variable i=1
step 3:  while i is less then n 
follow)  
step 3.1  initialize j =1  and count=1 and j is less then i (j<i)
step 3.2  print the value  of count 
step 3.3 increment count 
step 3.4 Increment 'j'.
 step 4   Increment 'i'.
step 4.1 Print a newline.
step 5:  End.



*/
