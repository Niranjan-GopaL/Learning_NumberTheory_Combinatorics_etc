#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long        ll ;      

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll t; cin >> t;
    while(t--){
        ll n,x; cin >> n;
        vector<int> a(n);
        cin >> a[0];x=a[0];
        bool flag=false;
        for(int i=1; i<n; i++){cin>>a[i]; if(x!=a[i]){flag=true;}}
       if(flag){
            sort(a.begin(),a.end());

            // all occurance of smallest element are in b
            int i=0,x=a[0];
            for(;i<n;i++){if( a[i] == x )cout<<a[i]<<" "; else break;}
            cout << "\n";

            // rest everything is in c
            for(;i<n;i++) cout << a[i] << " ";
            cout << "\n";
       }
       else cout <<"-1\n";
    }
}