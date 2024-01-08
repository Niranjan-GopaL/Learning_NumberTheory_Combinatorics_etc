#include <bits/stdc++.h>
using namespace std;

#define ll             long long
#define fi(a,b)        for(ll i=a; i<=b; i++)
#define fj(a,b)        for(ll j=a; j<=b; j++)
#define pb             push_back


// global stuff will be initialized fine
ll n,m,k,q,x,y,z;
ll u,v;
const ll arr_template_size = 1e6;

// global int   arrays are initialized to 0
ll a[arr_template_size];
ll b[arr_template_size];
ll c[arr_template_size];
ll cnt;

string s,t;
ll ans;


vector<char> edges;
bool vis[arr_template_size];


void solve(){
    // number of distinct characters => odd ( what they thought )
    // number of unique characters  => odd ( what I thought )
    cin >> s;

    for(char i : s){
        if(!a[i]) {
            edges.pb(i);
            a[i]++;
        }
    }

    // for(char i : edges)cout << i << ' ';

    if (edges.size()%2) cout << "IGNORE HIM!"; 
    else cout << "CHAT WITH HER!";
      
}



int main(){
    solve(  );
}