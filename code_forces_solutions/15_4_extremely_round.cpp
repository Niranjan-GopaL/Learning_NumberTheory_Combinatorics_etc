#include <bits/stdc++.h>
using namespace std;

typedef long long ll ;


void check_if_extremely_round(){
    ll t; cin >> t;
    while(t--){
        ll n,a ; int seen1 = 0, no_falg = 0 ;
        cin >> n ; a = n ;
        // number needs to have exatly ONE NON - ZERO
        // => ONLY first digit can be non-zero
        // => Rest all digits should be zero
        while(a/10){
            if(a%10 != 0){ cout << "NO\n"; no_falg = 1; break ;}
            a /= 10 ;
        }
        if(!no_falg || n<10 ) cout << "YES\n" ;
    }

}


void solve(){
    // 1 ... 9            => 9
    // 10 ... 90          => 9
    // 100 ... 900        => 9
    // 1000 ... 9000      => 9
    // 10000 ... 90000    => 9
    // 100000 ... 900000  => 9
    
    // given n => find unit digit -> A, number of digits -> D
    // answer = 9*(D-1) + A
    ll t; cin >> t;
    while(t--){
        ll n; int D = 0,A;
        cin >> n ;
        while(n){ D++; if(n/10==0)A=n;  n/=10;}
        cout << 9*(D-1) + A  << "\n";
    }
}


int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    solve();
}
