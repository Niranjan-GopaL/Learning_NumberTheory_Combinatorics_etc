#include <bits/stdc++.h>
using namespace std;

typedef long long ll ;


vector<ll> a(10);
void solve(){
    ll t,n;cin >> t;
    while(t--){
        cin >> n; 

        for(int i=0;i<n;i++)cin>>a[i];
        
        if(n==1){ (a[0]) ? (cout<<1<<"\n") : (cout<<0<<"\n") ; continue; }

        // count all zeros in the middle + 1
        ll l=0,r=n-1,c=0;

        //  ignoring all the trailing zeros 
        while(l<=n-1 && a[l]==0)l++; 
        if(l==r){cout << 0 << "\n"; continue; }
        while(r>=0 && a[r]==0)r--;

        while(l!=r){ if(a[l]==0)c++;l++; }
        cout << c+1 << "\n";
    }

}


int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    solve() ; 

}