#include <bits/stdc++.h>
using namespace std;

typedef long long        ll ;      
typedef vector<ll>      vi ;


/*
1
12
0 1 0 0 0 1 1 0 0 1 0 1 

*/

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t; cin >> t;
    while(t--){
        ll n,k,q; cin >> n >> k;
        vi a(0,n);vi x(0,n); ll sum_a=0,max_x = 0;
        for(ll i = 0;i<n;i++) {cin >> a[i] ; sum_a+=a[i]; }
        for(ll i = 0;i<n;i++) {cin >> q; x[i] = abs(q) ; max_x = max(max_x, abs(q)) ;}

        // if( sum_a > k*n){cout << "NO\n";continue;}

    

    }   
}