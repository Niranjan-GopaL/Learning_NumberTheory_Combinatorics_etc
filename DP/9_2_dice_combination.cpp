#include <bits/stdc++.h>
using namespace std;

typedef long long       ll ;      
typedef vector<ll>      veci ;

const ll n = 1e4 + 7; 



// f -> int number_of_ways_to_make_n_recursievly
ll dp[n] = {0} ;
int f______(int i){
    if( i < 0)return 0;
    if( i == 0)return 1;

    // THIS IS WHAT I didn't understand
    if( dp[i] != -1)return dp[i];

    for(int j=1; j<=6; j++){
        if(i<j)break;
        dp[i] += f______(i-j);
    }
    return dp[i] ;
}







int number_of_ways_to_make_n_iteratively( int x){
    //  dp[i] = number of ways in which we can build sum i
    // dp[i] = sum( dp[ i - j ]  for all j
    veci dp(0,x+1);  
    vector<int> dice = {1,2,3,4,5,6} ;

    for(ll i=1 ; i<=x; i++){
    for( int dice_num : dice){
        if (dice_num < i)break;
            dp[i] += dp[i-dice_num];
    }}

    return dp[x+1];
}


