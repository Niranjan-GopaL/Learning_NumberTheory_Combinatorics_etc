#include <bits/stdc++.h>
using namespace std;

// reverse array in O(n) time 
// traversing through only half of the array
// `AND SPACE`  
void rvereseArray(int arr[], int start, int end) { 
    while (start < end) { 
        swap(arr[start],arr[end]);
        start++; end--; 
    }  
}      

/* Utility function to print an array */
void printArray(int arr[], int size) 
{ 
   for (int i = 0; i < size; i++) 
   cout << arr[i] << " "; 
   cout << endl; 
}  

void recursive_reverse(int arr[], int l, int r){
    if (l==r) return;
    if (l>r){ swap(arr[l],arr[r]);return; }
    swap( arr[l], arr[r]);
    l++; r--;
    recursive_reverse(arr,l,r);
} 



int main(){
    int arr[] = {1, 2, 3, 4, 5, 6}; 
    printArray(arr, 6); 
    recursive_reverse(arr, 0, 5); 
    cout << "Reversed array is" << endl; 
    printArray(arr, 6); 
    return 0;
}