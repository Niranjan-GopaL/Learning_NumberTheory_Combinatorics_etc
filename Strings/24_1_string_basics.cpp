#include <bits/stdc++.h>
using namespace std;

typedef long long     ll ;      
typedef vector<int>    vi ;
typedef pair<int,int> pi ;

#define pb      push_back
#define mp      make_pair
#define f       first
#define s       second
#define len(A)  sizeof(A) / sizeof(A[0])

template <typename T> const T& max(const T& pA, const T& pB, const T& pC) { 
    return max(pA, max(pB, pC)); 
}

// Damn this worked ?
string reverse_string(string s){
    int l=0, r=s.length() - 1 ;
    while(l<r){
        /*  I THOUGHT THIS WAS ILLEGAL;  */
        // you can mutate string ??
        swap(s[l],s[r]);
        l++;r--;
    }
    return s;
}

bool is_palindrome(string s){
    // return !s.compare(reverse_string(s)) ;
    return s == reverse_string(s) ;
}



int main(){
    string s; cin >> s;
    // cout << reverse_string(s)  << "\n";
    cout << is_palindrome(s) << "\n" ;
    return 0;
}