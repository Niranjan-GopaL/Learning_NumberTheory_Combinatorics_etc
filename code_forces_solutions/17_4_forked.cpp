#include <bits/stdc++.h>
using namespace std;

typedef long long ll ;


void solve(){

    int dir_x[] = {1, 1, -1, -1}; 
    int dir_y[] = {1, -1, 1, -1}; 

    ll t,a,b,x1,y1,x2,y2; cin >> t;

    while(t--){
        int edge_case = 0;

        cin >> a >> b ;
        if(a==b)edge_case = 1;
        cin >> x1 >> y1 ;
        cin >> x2 >> y2 ;
        vector<pair<ll,ll>> pos;

        int n = (!edge_case) ? 2 : 1;

        for(int j=1;j<=n;j++){
            for (int i=0; i<4; i++){
                pos.push_back( make_pair( x1 + dir_x[i]*a, y1 +  dir_y[i]*b) ); 
            }swap(a,b);
        }

        n = (!edge_case) ? 8 : 4;
        int c = 0 ;

        for(int i=0;i<n;i++){
            for(int j=0; j<4; j++){
                if(pos[i].first + a*dir_x[j] == x2 && pos[i].second + b*dir_y[j] == y2 )c++;
            }

            if(!edge_case){
                swap(a,b);
                for(int j=0; j<4; j++){
                    if(pos[i].first + a*dir_x[j] == x2 && pos[i].second + b*dir_y[j] == y2 )c++;
                }
            }
        }
        cout << c << "\n";
    }
}


int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    solve() ; 
}