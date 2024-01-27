#include <bits/stdc++.h>
using namespace std;

typedef long long     ll ;      
typedef vector<int>   vi ;
typedef pair<int,int> pi ;

#define pb      push_back
#define mp      make_pair
#define f       first
#define s       second
#define len(A)  sizeof(A) / sizeof(A[0])

template <typename T> const T& max(const T& pA, const T& pB, const T& pC) { 
    return max(pA, max(pB, pC)); 
}


/*

1. My initial Brute Force implementaion ( more than linear )

[----------------]  ( for odd case )  12321
[----------------]  ( for even case ) 1233211112
i=1; 
loop till
if( s[i-j] == s[i+j]  ) j++ ; mx1 = max( mx1, 2*j+1)

loop till
if( s[i+ (j)] == s[i+ (j+1)]  ) j++ ; mx2 = max( mx2 , 2*j)

mx = max(m1, m2)



*/

int len;
bool is_valid(int idx){ return idx <=0 && idx < len ;}

// LEARN DP NOW!!　aim to solve this question by yourself
// SOLVE THIS PROBLEM
int longest_palindorme_substring(string s){



}




int main(){
    return 0;
}
