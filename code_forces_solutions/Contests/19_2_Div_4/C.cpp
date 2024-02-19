#include <bits/stdc++.h>
using namespace std;

typedef long long        ll ;      


ll sum_of_digit(ll a){
    ll s=0;
    while(a){ s+=a%10; a/=10;}
    return s;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll t,n; cin >> t;
    while(t--){
        cin >> n; ll s=0;
        for(int i=1;i<=n;i++) s+=sum_of_digit(i);   
        cout << s << "\n" ;
    }

}