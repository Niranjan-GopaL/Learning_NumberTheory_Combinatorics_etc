#include <bits/stdc++.h>
using namespace std;

/* Utility function to print an array */
void printArray(int arr[], int size) { 
   for (int i = 0; i < size; i++) cout << arr[i] << " "; 
   cout << endl; 
}  


// key idea :=   i --> ( i + k ) % n
void rotate(int arr[], int n, int k){
    for (int i = 0; i < n-1; i++)
        swap(arr[i], arr[ (i + k) % n ]);
}



int main(){
    int A[] = {1, 2, 3, 4, 5};
    printArray(A,5);

    rotate(A,5,9);

    printArray(A,5);
    return 0;
}

