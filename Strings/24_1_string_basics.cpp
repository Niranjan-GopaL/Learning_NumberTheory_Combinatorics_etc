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
// for both reversing a string; checking palindrome,etc ----> TRAVERSE ONLY HALF THE ENTIRE ARRAY
string reverse_string(string* s){
    int l=0, r = s->length() - 1 ;
    while(l<r){
        /*  I THOUGHT THIS WAS ILLEGAL;  */
        // you can mutate string ??
        swap(s[l],s[r]);
        l++;r--;
    }
    return *s;
}

bool is_palindrome(string* s){
    // return !s.compare(reverse_string(s)) ;
    return (*s) == reverse_string(s) ;
}


bool s1_is_s2_rotated(string* s1, string* s2){
    int n = s1->size();
    if(n != s2->size() )return false;

    int i,j;
    while(s1[i] != s2[0] )i++ ;
    // now we get the first i at which s1[i] ==s2[0]
    //  [------------i--]
    //  [0--------------]

    for(int j=1;j<n-1;j++ ){
        //  [------------i+1--]
        //  [-1--------------]
        // so I need to do circular rotation for i; hence MOD N; really nice idea
        if( s1[(i+1)%n] != s2[j]  ) return false;
        i++;
    }
    return true;
}

bool has_duplicate(string* s){
    unordered_map<char,int>mp;
    for(char c : *s){
        if(!mp.count(c)) mp[c]=1;
        else return false;
    }
    return true;
}


int main(){
    string s; cin >> s;

    // cout << reverse_string(&s) << "\n" ;
    // cout << is_palindrome(&s)  << "\n" ;
    
    // string s2; cin >> s2;
    // cout << s1_is_s2_rotated(&s,&s2) << "\n" ;

    // cout << has_duplicate(&s) ;

    return 0;
}