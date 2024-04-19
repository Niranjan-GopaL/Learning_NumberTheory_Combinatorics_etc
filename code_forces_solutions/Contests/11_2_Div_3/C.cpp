#include <iostream>
#include <vector>
using namespace std;

typedef long long        ll ;      


int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll q,n;string s,s1; cin >> q;
    while(q--){
        cin >> n >> s;
        int ans=0,i=0;

        while(i<=n-3){
            // cout << s.substr(i,3) << "\n";
            s1 = s.substr(i,3);
            if(i+4<=n-1 && s.substr(i,5)=="mapie"){ans++;i+=4;continue;}
            else if( s1=="map" || s1=="pie" )ans++;
            i++;
        }

        cout << ans << "\n";
    }
}
