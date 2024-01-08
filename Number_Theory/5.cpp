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

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n;
    string front,end;

    fi(1,n){
        char ch;cin >> ch;
        if(ch == '5')
            front += "5"; 
        else if (ch == '0')
            end += "0";
    }

    x = front.size();
    y = end.size();
    if (x<9 && !y)cout<< -1;
    else if(x<9 && y)cout << 0;
    else{
        front.erase(x/9*9);   
        cout << front + end;
    }


    return 0;
}