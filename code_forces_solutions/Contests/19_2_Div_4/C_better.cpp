#include <bits/stdc++.h>
using namespace std;

typedef long long        ll ;      

const ll m = 1e6;
ll dp[m];

int d(ll a){
    int c=0;
    while(a){a/=10;c++;}
    return c;
}


int main(){
    auto start_time = chrono::high_resolution_clock::now();

    cin.tie(0)->sync_with_stdio(0);
    ll t,n; cin >> t;
    dp[0]=0;dp[1]=45;
    
    for(int i=2;i<7;i++)dp[i] = dp[i-1]*10 + 45*pow(10,i-1);
    for(int i=1;i<7;i++)cout << dp[i] <<"\n" ;

    while(t--){
        cin >> n; ll s=0,a=0,p=0,ten_pow=0;
        while(n){
            p = d(n)-1 ;
            ten_pow = pow(10,p);
            a = n/ten_pow;
            if(p==0) s+= a*(a+1)/2;
            else{
                s += a*dp[p];
                s += a * (n%ten_pow + 1) ;
            } 
            // cout << "THIS IS n " << n << "sum is " << s << "\n" ;
            n = n % (int)ten_pow;
        }
        cout << s << "\n" ;
    }

    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end_time - start_time);
    cout << "Time taken: " << duration.count() << " microseconds" << endl;
}
