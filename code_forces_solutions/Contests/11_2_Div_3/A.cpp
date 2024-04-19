#include <iostream>
#include <vector>
using namespace std;

typedef long long        ll ;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll q,n,m,k,num; cin >> q;
    while(q--){
        cin >> n >> m >> k;
        vector<ll> c,b;
        for(int i=0;i<n;i++){ cin >> num; b.push_back(num); }
        for(int i=0;i<m;i++){ cin >> num; c.push_back(num); }

        int ans = 0;
        for(int i=0;i<n;i++) for(int j=0;j<m;j++)
            if( b[i] + c[j] <= k )ans++;
            
        cout << ans << "\n";

    }
}
