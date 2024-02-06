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

template <typename T>  T& max( T& pA,  T& pB,  T& pC) { 
    return max(pA, max(pB, pC)); 
}

#define n 100
#define m 100
#define inf 2e5

int dp[n][m];

int grid[n][m];

int f(int i, int j){
    if(i>=n && j>=m)return inf; // moving outside the grid isn't allowed

    if(i==n-1 && j==m-1)return grid[n-1][m-1]; // reached destination

    // if the state is already calculated then return it from mem
    if(dp[i][j]!=-1)return dp[i][j];

    // state never seen before
    dp[i][j] = grid[i][j] + max(f(i,j+1), f(i+1,j)) ;
    return dp[i][j];
}


int solve(int a){
    for(int i=0; i<n; i++)for(int j=0;j<m;j++) dp[i][j] = -1 ;
    cout << f(0,0) << "\n" ;
}




int main(){
    
}




