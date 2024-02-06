#include <bits/stdc++.h>
using namespace std;

typedef long long        ll ;      
typedef vector<int>      vi ;
typedef pair<int,int>    ii ;

#define pb      push_back
#define mp      make_pair
#define f       first
#define s       second
#define len(A)  sizeof(A) / sizeof(A[0])

#define n 100


int dp[n] = {0} ;

int rec(vector<int>& nums, int idx, vector<int>& dp){
    if (idx >= nums.size()) return 0;
    if (dp[idx] != -1)
        return dp[idx];
    return dp[idx] = max( rec(nums, idx + 1, dp),  nums[idx] + rec(nums, idx + 2, dp));
}


int solve(int *a){
    dp[0] = a[0] < 0 ? 0 : a[0] ;
    for(int i=2;i<n;i++) dp[i] = max( dp[i-2]+a[i] , dp[i-1] ) ;

}


int main(){
    
}