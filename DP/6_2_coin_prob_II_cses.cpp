#include <bits/stdc++.h>
using namespace std;

typedef long long       ll ;      
typedef vector<ll>      veci ;
typedef pair<ll,ll>     ii ;

#define pb      push_back
#define mp      make_pair
#define f       first
#define s       second
#define len(A)  sizeof(A) / sizeof(A[0])




int solve(veci a, int x){
    //  dp[i] = number of ways in which i can build sum i
    // dp[i] = sum( dp[ x - a[j] ] + dp[ a[j] ] ) for all j
    sort(a.begin(), a.end());;
    veci dp(-1,x+1);
    dp[0] = 0; int n = a.size();

    for(ll i=1; i<=x; i++){
        for( ll j=0; j<n; j++){
            if(i-a[j] < 0)break;
            
        }
    }
    


}


int main(){
    
}