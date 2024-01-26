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

// We have O(N) time and space
// if we sacrifice on time a litte ; then we can do this in O(1) space ;
//                                                     => answer sorting
void all_duplicate_char(string* s){ 
    unordered_map<char,int>mp;
    for(char c : *s) mp[c]++;
    // iterating through all key value pairs ; 
    // THIS ---> ` it != mp.end() `  in the condition in for loop isn't valid but != is  
    for(auto it = mp.begin() ; it != mp.end(); ++it)
        cout << "character " << it->first << " = "  << it->second << "\n" ;

}

// THIS HAS THE WIERDEST STUFF 
void all_duplicate_char_constant_space(string* s){ 
    // THIS IS NOT HOW YOU SORT 
    // sort(*s);
   int len = s->length();
    // Sorting the string !!
    sort(s->begin(), s->end());

    // [iiiiijjjj-------------]

    // 頭　悪い　です　！
    char ch = (*s)[0]; int sum=0, i=0 ;
    while(i<len){
        if( (*s)[i]==ch ) sum++ ;
        else{
            cout << "character " << ch << " = "  << sum << "\n" ;
            // おかしい　!!
            ch = (*s)[i] ; sum = 1 ;
        }
        i++ ;
        // for the very last character 
    }
    cout << "character " << ch << " = "  << sum << "\n" ;
    // s->begin()
    // (*s)[i] 
    // all these could have been solved if you could have created a copy of the string from parameter;
    // 駄目　人間　でしたー　
}

int main(){
    string s; cin >> s;

    // cout << reverse_string(&s) << "\n" ;
    // cout << is_palindrome(&s)  << "\n" ;
    
    // string s2; cin >> s2;
    // cout << s1_is_s2_rotated(&s,&s2) << "\n" ;

    // cout << has_duplicate(&s) ;
    // all_duplicate_char_constant_space(&s) ;

    return 0;
}