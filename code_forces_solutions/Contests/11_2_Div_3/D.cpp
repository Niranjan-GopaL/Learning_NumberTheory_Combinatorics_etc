#include <iostream>
#include <vector>
using namespace std;

typedef long long        ll ;      


int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll q,n,m,x,ri; cin >> q;char dir;
    while(q--){
        cin >> n >> m >> x;


        vector<ll> player1(n+1,0);
        vector<ll> player2(n+1,0);
        // (n-r)%n
        player1[x]=1;

        // all even i will check in player2
        // all odd i will check in player1
        for(int i=0;i<m;i++){
            cin >> ri >> dir ;
            
            if( dir == '0'){
                for(int x=1;x<=n;x++){
                    if(i%2){ if(player1[x]){ player2[ (x+ri)%n ] = 1; player1[x]=0;}  }
                    else{ if(player2[x]){ player1[ (x+ri)%n ] = 1; player2[x]=0;}  } }
            }
            else if( dir == '1'){
                for(int x=1;x<=n;x++){
                if(i%2){ if(player1[x]){ player2[ (x-ri+n)%n ] = 1; player1[x]=0;}  }
                else{ if(player2[x]){ player1[ (n+ri)%n ] = 1; player2[x]=0;} }}
            }
            else if( dir == '?') {
                for(int x=1;x<=n;x++){
                if(i%2){ if(player1[x]){ player2[ (n+ri)%n ] = 1; player2[ (n+ri)%n ] = 1; player1[x]=0;}  }
                else{ if(player2[x]){ player1[ (n+ri)%n ] = 1; player2[ (n+ri)%n ] = 1; player2[x]=0;}  }}
            }

        }




    }
}