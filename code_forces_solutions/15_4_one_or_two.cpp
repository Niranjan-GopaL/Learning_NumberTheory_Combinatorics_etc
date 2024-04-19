#include <bits/stdc++.h>
using namespace std;

typedef long long ll ;

int a[1000];
void solve(){
    ll t,n; cin >> t;
    while(t--){
        ll c=0,k=0;
        cin >> n ;
        for( int i=0; i<n; i++ ){cin>>a[i]; if(a[i]==2)c++;} 
        if( c%2==1 ){ cout<<"-1\n"; continue;}
        for( int i=0;i<n;i++ ){ if(a[i]==2)k++; if(k==c/2){ cout<<i+1<<"\n"; break;}  } 
    }
}


int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    solve();
}
