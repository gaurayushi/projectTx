#include<iostream>
#include<climits>  // Include this header for INT_MIN and INT_MAX
using namespace std;

/* 
   Array traversal.
   Time complexity of array traversal:
   Worst case O(n)
   Best case (1)
*/
void traversal(int num, int arr[]) {
    cout << "Enter the elements of the array:" << endl;
    
    for(int i = 0; i < num; i++) {
        cout << "Element at index " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "\nElements after array traversal:" << endl;
    for(int i = 0; i < num; i++) {
        cout << "Index " << i + 1 << ": " << arr[i] << endl;
    }
}

/* 
   Reverse in an array.
   Time complexity of reversal in an array:
   Worst case O(n)
   Best case (1)
*/
void reverse(int num, int arr[]) {
    cout << "\nElements after reversing the array:" << endl;
    
    for(int i = num - 1; i >= 0; i--) {
        cout << "Index " << i << ": " << arr[i] << endl;
    }
}

/* 
   Find maximum and minimum in an array.
   time complexity of array maximum and minimum
   wrost case : O(n)
   best case : 1
*/
void maximum(int num, int arr[], int &max, int &min) {
    cout << "\nFinding the maximum and minimum in the array:" << endl;

    // Initialize max and min with the first element of the array
    max = min = arr[0];

    for (int i = 1; i < num; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "The maximum element in the array: " << max << endl;
    cout << "The minimum element in the array: " << min << endl;
}

int main() {
    int n;
    int arr[12];
    int max;
    int min;

    cout << "Enter the limit for the array: ";
    cin >> n;

    traversal(n, arr);
    reverse(n, arr);
    maximum(n, arr, max, min);

    return 0;
}
