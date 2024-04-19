#include <bits/stdc++.h>
using namespace std;

typedef long long ll ;



// [-----a-----|---------|--b----]
// [-----a-----|---------|--b----]

// so if a  + b < n => then possible otherwise
// both LCprefix and LCsuffix == n 
// you need at least 2 elements to interchange in the center 
// so that you can generate 2 different permutation

void solve(){
    int t,n,a,b; cin >> t;
    while(t--){
        cin >> n >> a >> b;
        ( (a==b&&a==n) || (a+b<n-1) ) ? (cout<<"YES\n") : (cout<<"NO\n") ;
    }
}


int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    solve();
}

