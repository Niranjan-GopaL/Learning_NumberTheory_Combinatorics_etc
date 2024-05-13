#include <iostream>
#include <vector>
using namespace std;

typedef long long        ll ;      



//  kotatsugame's solution is insane; check that out later

// my brute force code --> just simulates what's gonna happen
int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll q; cin >> q;
    while(q--){
        ll n; string s,temp; cin >> n >> s ;
        vector<ll> v(n);
        
        for(ll i=0;i<n;i++){
            ll st = i, t = 0;temp=s;
            while(st!=-1 && st!=n){
                if(temp[st]=='<'){temp[st]='>';st--;}
                else             {temp[st]='<';st++;}
                t++;
            }
            v[i]=t;
        }
        for(ll i=0;i<n;i++)cout << v[i] << " " ;
        cout<<"\n";
    }
}