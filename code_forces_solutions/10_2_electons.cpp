#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main(){
    ll n,t,x=0,s=0,max_a=0; cin >> n;t=n;
    while(t--){ cin >> x; s += x; max_a = max(max_a, x); } 
    if( s < max_a ) cout << max_a << "\n" ;
    else cout << floor(2*s/n) + 1 << "\n" ;
}