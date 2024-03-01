#include <iostream>
#include <vector>
using namespace std;

typedef long long        ll ;      
#define pb push_back



int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll t; cin >> t;
    while(t--){
        ll n,x,temp; cin >> n; temp=n;
        vector<int> b;
        n--;
        cin >> x; b.pb(x);
        while(n--){cin >> x; b.pb(x); b.pb(x); }
        cout << 2*temp-1 << "\n";
        for(int i=0;i< 2*temp-1;i++){ cout << b[i] << " "; } 
        cout << "\n";
    }
}