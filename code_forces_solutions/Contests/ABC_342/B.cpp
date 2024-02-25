#include <bits/stdc++.h>
using namespace std;

typedef long long        ll ;      


unordered_map<int,int> mp;
int p[100];


int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n; cin >> n;
    for(int i=0; i<n;i++){cin >>p[i]; mp[p[i]] = i;}
    ll q; cin >> q;
    while(q--){
        ll a,b; cin >> a >> b;
        cout << ( mp[a] < mp[b] ? a : b) << "\n";
    }
}