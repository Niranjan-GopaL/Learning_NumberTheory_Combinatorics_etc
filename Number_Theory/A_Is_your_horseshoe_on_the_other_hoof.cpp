#include <bits/stdc++.h>
using namespace std;

#define ll             long long
#define fi(a,b,c)        for(ll i=a; i<=b; i+=c)
#define fj(a,b,c)        for(ll j=a; j<=b; j+=c)
#define pb             push_back



// global stuff will be initialized fine
ll x,y,z;
ll n,m,k,q;
ll u,v;
ll cnt;
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

    cin >> a[0] >> a[1] >> a[2]  >> a[3];
    sort(a,a+4);

    fi(1,3,1){
        if( a[i] == a[i-1] )cnt++;
    }
    //  0 0, 1 1, 2 2, 3 0
    if(cnt != 3)cout << cnt ;
    else cout << 3;
    
}