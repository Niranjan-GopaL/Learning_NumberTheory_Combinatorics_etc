#include <bits/stdc++.h>
using namespace std;

#define ll             long long
#define fi(a,b)        for(ll i=a; i<=b; i++)
#define fj(a,b)        for(ll j=a; j<=b; j++)
#define pb             push_back


// global stuff will be initialized fine
ll x,y,z;
ll n,m,k,q;
ll u,v;
const ll arr_template_size = 1e6;


int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> q;
    while(q--){
        cin >> x >> k ;
        
        if(x%k) {
            cout << 1 << '\n'; 
            cout << x << '\n';
        }else{
            cout << 2 << '\n';
            cout << x-1 << " " << 1 << '\n';
        }

    }

    
}