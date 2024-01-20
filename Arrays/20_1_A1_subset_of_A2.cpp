#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define pb      push_back
#define f       first
#define s       second
#define len(A)  sizeof(A) / sizeof(A[0])



string is_A_subset_B(int* A, int n, int* B, int m){
    // finally a hash_map !!
    // this is implemented using a HASH TABLE ( not a heap ) 
    // so average time to find is O(1)
    unordered_map<int, bool> map;

    // maping the each member of A to true
    for(int i=0; i<n; i++) if(map.find(A[i]) == map.end()) map[A[i]]=true;

    // hashmap contents after A traversal
    cout << "--------------- after A\n" ;
    for (auto it = map.begin(); it != map.end(); ++it) {
        cout << it->first << " " << it->second << "\n" ; 
    }


    // if a member of A is found in B; they'll be put to false
    for(int i=0; i<m; i++) if(map.find(B[i]) != map.end()) map[B[i]]=false;

    cout << "\n\n\n--------------- after B\n" ;
    for (auto it = map.begin(); it != map.end(); ++it) {
        cout << it->first << " " << it->second << "\n" ; 
    }

    // on traversing the hash table, if any element is still true ( present in A not in B)
    // A has an element that isn't in B => A not a subset of B
    for (auto it = map.begin(); it != map.end(); ++it) {
        if(! it->second)return "NO";
    }

    return "YES";
}

// In O(1) space and O(nlogn + mlogm) complexity
string isSubset(int a1[], int n, int a2[], int m) {

    // Sorting ARRAYS !!!
    sort(a1,a1+n); sort(a2,a2+m);

    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a1[i] < a2[j]) { ++i; } 
        else if (a1[i] == a2[j]) {++i;++j; } 
        else { return "No"; }
    }
    return (j == m) ? "Yes" : "No";
}


int main(){
    int A[] = {1,2,3,4,5};
    int B[] = {2,10,3,4,5,1,100,34,3,3};

    len(A); // <-- this would yield correct count of numbers; but the moment you do len(A) INSIDE THE FUNCTION 
            // that recieves the SAME ARRAY as param it does not work
    cout << "\nA is subset of B? -->  " <<  is_A_subset_B(A,len(A) ,B, len(B) ) << "\n" ;
    cout << "\nA is subset of B? -->  " <<  isSubset(A,len(A) ,B, len(B) );
    return 0;
}