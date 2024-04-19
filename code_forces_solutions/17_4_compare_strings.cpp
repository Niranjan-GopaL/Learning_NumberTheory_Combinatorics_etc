#include <bits/stdc++.h>
using namespace std;

typedef long long ll ;



// wrong answer on test 2
void solve(){
    ll t,n; string s;cin >> t;
    while(t--){
        cin >> n >> s ;
        ll  c = 0, mx = 0;
        for(char ch : s){
            c += (ch=='<') ? 1 : -1 ; 
            mx = max( mx , abs(c)) ;
        }
        cout << mx+1 << "\n";
    }
}




int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    solve() ; 
}