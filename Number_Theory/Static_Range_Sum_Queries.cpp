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

// global int   arrays are initialized to 0
ll a[arr_template_size];
ll b[arr_template_size];
ll c[arr_template_size];

string s,t;
ll ans;


vector<ll> edges[arr_template_size];
bool vis[arr_template_size];


int main(){

    cin >> n >> q;

    cin >> a[1];
    b[1] = a[1];

    fi(2,n){
        cin >> a[i];
        b[i] = a[i] + b[i-1];
    }
    

    while(q--){
        cin >> x >> y;
        cout << b[y] - b[x-1] << '\n';
    }
    
}