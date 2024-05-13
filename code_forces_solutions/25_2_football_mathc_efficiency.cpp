#include <iostream>
using namespace std;

typedef long long        ll ;



int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t; cin >> t;
    while(t--){
        ll n,temp,s=0;cin >> n; n--; // they are giving n-1 inputs
        while(n--){cin>>temp;s+=temp;}
        cout << -s << "\n";
    }
}