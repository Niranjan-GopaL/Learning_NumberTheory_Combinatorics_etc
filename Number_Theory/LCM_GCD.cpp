#include <bits/stdc++.h>
using namespace std;

#define ll             long long
#define fi(a,b)        for(ll i=a; i<b; i++)
#define fj(a,b)        for(ll j=a; j<b; j++)
#define pb             push_back


// global stuff will be initialized fine
ll n,m,k,q,x,y,z;
ll t;
ll u,v;
const ll arr_template_size = 1e6;

// global int   arrays are initialized to 0
ll a[arr_template_size];
ll b[arr_template_size];
ll c[arr_template_size];

string s;
ll ans;


vector<ll> edges[arr_template_size];
bool vis[arr_template_size];


void solve(){
    cin >> t;

    fi(0,t)
        cin >>  a[i];
    fi(0,t)
        cout << 1 << " " << a[i]-1 << endl;
}



int main(){
    solve();
}