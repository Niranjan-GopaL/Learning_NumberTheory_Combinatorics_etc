#include <bits/stdc++.h>
using namespace std;

typedef long long        ll ;      


int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t; vector<ll> a(3);
    cin >> t;
    while(t--){
        cin >> a[0] >> a[1] >> a[2] ;
        ll ans = a[1];
        a[2] -= a[1] ; a[1] = 0;
        sort(a.begin(),a.end()) ;
        cout << "OUT : "  << ((a[2]-a[1]) & 1)  << "\n" ;
        ans += a[1];
        if( (a[2]-a[1]) & 1){ cout << "-1\n"; continue;}
        cout << ans << "\n";
    }
}


/*

5
2 4 6
3 4 5 <--- TF ?


*/