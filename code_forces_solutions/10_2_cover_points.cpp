#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main(){

    ll n,x,y,max_sum=0; cin >> n;
    pair<ll,ll> p;
    while(n--){
        cin >> x >> y ;
        if(x+y > max_sum) {max_sum = x+y; p={x,y}; } 
    }
    cout << p.first + p.second << "\n";

}