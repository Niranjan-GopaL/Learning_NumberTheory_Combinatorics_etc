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


/*

[----------------]
[----------------]
i=1; 
loop till
if( s[i-j] == s[i+j]  ) j++ ; mx = max( mx, 2*j+1)

loop till
if( s[i+ (j)] == s[i+ (j+1)]  ) j++ ; mx = max( mx, 2*j)

*/
int len;
bool is_valid(int idx){ return idx <=0 && idx < len ;}

int longest_palindorme_substring(string s){



}




int main(){
    return 0;
}
