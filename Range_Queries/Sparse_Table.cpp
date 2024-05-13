#include <vector>
using namespace std;

typedef long long        ll ;      
#define MX              100000


// Log efficiently
ll log[MX];
void build_log(int N){
    log[1] = 0 ;
    for(int i = 2; i <= N ; i++)log[i] = 1 + log[i/2] ;
}


ll table[MX][25];
void build(vector<ll> a){
    ll N = a.size();
    
    // we look at (L,R) with W=2^j width
    ll L = N - 1, W = 0, R = 0 ;

    for(; L>=0 ; L--){
        for(; W <= 25 ; W++){
            R = L + (1<<W) - 1 ;
            
            if(R >= N)break ;
            if(R==0)table[L][W] = a[L];
            else
                table[L][W] = min( table[L][W-1] , table[ L + 1<<(W-1) ][W - 1] ) ;
    }}
}

ll query(ll L, ll R){
    int W = R - L ;
    ll power = log[W];
    ll lim = 1 << power ;
    return min( table[L][lim]  , table[R-lim][lim] ) ;
}



