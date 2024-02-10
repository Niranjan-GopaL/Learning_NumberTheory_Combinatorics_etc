#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll l,r ;
    cin >> l >> r ;
    cout << "YES" << "\n" ;
    for( ll i=l; i<=r; i+=2) cout << i << " " << i+1 << "\n" ;

}