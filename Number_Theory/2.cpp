#include <bits/stdc++.h>
using namespace std;

#define ll             long long
#define pb             push_back


// global stuff will be initialized fine
ll x,y,z;
ll n,m,k,q;
ll u,v;

void solve(){

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    cin >> n;
    while(n--){
        cin >> x >> y;

        if(x==1 && (y==1 || y ==0)) {cout << 1 << "\n" << x << " " <<y << "\n";continue;} 
        if(x==0 && (y==1 || y ==0)) {cout << 1 << "\n" << x << " " <<y << "\n";continue;} 


        if(__gcd(x,y) == 1)cout << 1 << "\n" << x <<" "<< y << "\n";
        else{
            vector<ll> dx = {-1,0};
            vector<ll> dy = {1,-1,0};

            bool found = 0;
            for(int i=0; i<3 && !found; i++){
                for(int j=0; j<3 && !found; j++){
                    if(__gcd(x+dx[i],y+dy[j]) == 1){
                         cout << 2 << "\n" << x+dx[i] << " " << y+dy[j] << "\n" <<x <<" " <<y << "\n";
                         found = 1;
                    }
                }
            }
        }

    }
}


int main(){

    solve();
    
}






/*

199  = 145 + 54
--------------------------

99 + 100

50 + 149 

25 + 174 

87 + 112

56 + 143

28 + 171


59
--------------------------------

29 + 30 

15 + 44

22 + 37

11 + 48

35 + 24

47 + 12

53 + 6

3 + 56

31 + 28

45 + 14

7 + 52

*/