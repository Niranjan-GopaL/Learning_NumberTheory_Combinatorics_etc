#include <bits/stdc++.h>
using namespace std;

#define vec vector
#define pb push_back


void printVector(vec<int>& v) {
    for (int elem : v) 
        cout << elem << " ";
    cout << endl;
}

// we use a.size() and b.size() wayy too many times ;
//  m = a.size() ; n = b.size() is the way to go



// fails for the test case :-
//      vector<int> arr1 = {1, 2, 2, 2, 3};    
//      vector<int> arr2 = {2, 3, 3, 4, 5, 5}; 


// APPARENTLY when I wrote reference in the function header it didn't work; It created empty something like arrays
// void union_sorted_arraysWithDuplicates( vec<int>& a, vec<int>& b, vec<int>& merged ){
void union_sorted_arraysWithOutDuplicatesElemInEachArray( vec<int> a, vec<int> b, vec<int> &merged ){

    // int i,j = 0; initialises i ; assigns j = 0 
    // just because we did int i,j=0 IT COMPILED FINE and gave hell of headache to debug
    int i=0,j=0;

    while( i<a.size() && j<b.size() ){

        // REMEMBER :-
        // if you are INCREMENTING AN ARRAY INDEX
        // INSIDE THE LOOP BY WHICH YOU ARE TRAVERSING the array
        // always HAVE THIS AS THE FIRST CONDITION
        //  > while( i<a.size()  && ...other_conditions... ) 
        while( i<a.size() && a[i] < b[j] ){ merged.pb( a[i]); i++ ; /* printVector(merged); cout << "1---" << "\n"; */    }
        while( j<b.size() && b[j] < a[i] ){ merged.pb( b[j]); j++ ; /* printVector(merged); cout << "2---" << "\n"; */    }

        if( a[i] == b[j] ){ merged.pb( a[i] ); i++; j++;  /* printVector(merged); cout << "3---" << "\n"; */  }
    }

    while( i < a.size() ){ merged.pb(a[i]); i++; }
    while( j < b.size() ){ merged.pb(b[j]); j++; }

}



void next_distinct(const vector<int> &arr, int &x) {
  // vector CAN be passed by reference to avoid unnecessary copies.
  // x(index) MUST be passed by reference so to reflect the change in the original index parameter
    do{ ++x;} while (x < arr.size() && arr[x - 1] == arr[x]);
}


void union_sorted_arrays_that_handles_DUPLICATE( vec<int> a, vec<int> b, vec<int> &merged ){

    // KEY IDEA
    // instead of blindly doing i++, j++ we'll increment index 
    // SUCH THAT new_index element is guarenteed to be not a duplicate
    int i=0,j=0;

    while( i<a.size() && j<b.size() ){
        while( i<a.size() && a[i] < b[j] ){ merged.pb( a[i]); next_distinct(a,i) ;     }
        while( j<b.size() && b[j] < a[i] ){ merged.pb( b[j]); next_distinct(b,j) ;     }
        if( a[i] == b[j] ){ merged.pb( a[i] ); next_distinct(b,j); next_distinct(a,i);  }
    }

    while( i < a.size() ){ merged.pb(a[i]); next_distinct(a,i); }
    while( j < b.size() ){ merged.pb(b[j]); next_distinct(b,j); }

}



// algo is sought of like count sort
int main() {
    
        // vec<int> a =  { 1, 2, 4, 5, 6 };
        // vec<int> b = { 2, 3, 5, 7 };

        vector<int> a = {1, 2, 2, 2, 3};   
        vector<int> b = {2, 3, 3, 4, 5, 5};

        printVector(a);
        printVector(b);

        vec<int> v;
        union_sorted_arraysWithOutDuplicatesElemInEachArray(a,b,v);
        printVector(v);

        v.clear(); // v = vector<int>();

        union_sorted_arrays_that_handles_DUPLICATE(a,b,v);
        printVector(v);

}