#include <bits/stdc++.h>
using namespace std;

#define ll             long long
#define fi(a,b)        for(ll i=a; i<=b; i++)
#define fj(a,b)        for(ll j=a; j<=b; j++)
#define pb             push_back


// global stuff will be initialized fine
ll x,y,z;
ll n,m,k,p,q;
ll u,v;
const ll arr_template_size = 1e6;

// global int   arrays are initialized to 0
ll a[arr_template_size];
ll b[arr_template_size];
ll c[arr_template_size];

string s,t;
ll ans;
char ch;


vector<ll> prefix_matrix[arr_template_size];

int main(){

    cin >> n>> q;

    fi(1,n) {
        cin >> s;
        fj(1,n){
            if(s[j] == '*')
                prefix_matrix[i].pb( (ll)1 + prefix_matrix[i-1][j] + prefix_matrix[i][j-1]) ;
            else
                prefix_matrix[i].pb(prefix_matrix[i-1][j] + prefix_matrix[i][j-1]);
            cout << prefix_matrix[i][j] << '\n';
        }
    }

    fi(1,n)
        fj(1,n)
        cout << prefix_matrix[i][j] << '\n';


    while (q--)
    {
        cin >> p >> q >> x >> y ;
        if(p>x)swap(p,x);
        if(q>y)swap(q,y);

        cout << prefix_matrix[x][y] - prefix_matrix[x][q-1] - prefix_matrix[p-1][y] + prefix_matrix[p-1][q-1];
    }
    

    return 0;
}


