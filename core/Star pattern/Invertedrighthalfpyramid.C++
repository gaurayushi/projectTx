/*  write a program to print right half pyramid pattern in c
Inverted Right Half Pyramid Pattern in C
* * * * *   |   1 2 3 4 5   |   A B C D E 
* * * *     |   1 2 3 4     |   A B C D
* * *       |   1 2 3       |   A B C
* *         |   1 2         |   A B
*           |   1           |   A

*/

#include <iostream>
using namespace std;

void AlphabetPattern(int n) {
    int i, j;
    i = 1;
    while (i <= n) {
        j = 1;
        while (j <= n - i) {
            char ch = 'A' + j - 1;  
            cout << ch;
            j = j + 1; 
        }
        i = i + 1;
        cout << endl;
    }
}

/* 

Algorithm for AlphabetPattern(n):
 step 1. Read the input 'n' (define no of rows) 
 step 2. Initialize a variable 'i' to 1.
 step 3. While 'i' is less than or equal to 'n', do
   step 3.1. Initialize a variable 'j' to 1.
   step 3.2. While 'j' is less than or equal to 'n - i', do the following:
    step 3.3. Calculate the character 'ch' using the formula 'A' + 'j' - 1.
      step 3.4 Print the character 'ch'.
      step 3.5 Increment 'j'.
  step 4 Increment 'i'.
   step 5 Print a newline.
step 6. End.

*/

void StarPattern(int n) {   //function declare
    int i, j;
    i = 1;
    while (i <= n) {
        j = n;
        while (j >= i) {
            cout << "*";
            j = j - 1;
        }
        i = i + 1;
        cout << endl;
    }
}

/*
1. Read the input 'n' to determine the number of rows.
2. Initialize a variable 'i' to 1.
3. While 'i' is less than or equal to 'n', do the following:
   a. Initialize a variable 'j' to 'n'.
   b. While 'j' is greater than or equal to 'i', do the following:
      i. Print "*".
      ii. Decrement 'j'.
   c. Increment 'i'.
   d. Print a newline.
4. End.


*/
void NumberPattern(int n) {  //function declare
    int i, j;
    i = 1;
    while (i <= n) {
        int count = 1;
        j = n;
        while (j >= i) {
            cout << count;
            count = count + 1;
            j = j - 1;
        }
        i = i + 1;
        cout << endl;
    }
}

/*
1. Read the input 'n' to determine the number of rows.
2. Initialize a variable 'i' to 1.
3. While 'i' is less than or equal to 'n', do the following:
   a. Initialize a variable 'count' to 1.
   b. Initialize a variable 'j' to 'n'.
   c. While 'j' is greater than or equal to 'i', do the following:
      i. Print the value of 'count'.
      ii. Increment 'count'.
      iii. Decrement 'j'.
   d. Increment 'i'.
   e. Print a newline.
4. End.
*/
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

