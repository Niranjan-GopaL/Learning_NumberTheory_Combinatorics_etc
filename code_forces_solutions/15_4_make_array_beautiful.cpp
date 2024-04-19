#include <iostream>
#include <vector>
using namespace std;
 
 
int a[50]; int s[50];

void solve(){
    int t,n; s[0]=0; cin >> t;
    while(t--){
        cin >> n; int found = 0, edge_case = 0;
        vector<int> idx;
 
        for(int i=1 ; i<=n ; i++){ 
            cin>>a[i];
            s[i] = s[i-1]+a[i]; 
            if( i>2 && a[i]==s[i-1] ) idx.push_back(i);
        }
 
        if(a[1]==a[2]){
            edge_case = 1;
            for(int i=3;i<=n;i++)if(a[i] != a[1]){
                found = 1; 
                swap(a[1],a[i]); 
            }
        }
        if(edge_case && !found){ cout<<"NO\n";continue; }
 
        
        for(int i : idx) swap(a[i],a[i-1]);
 
        cout<<"YES\n";for(int i=1;i<=n;i++)cout<<a[i]<<" ";
        cout<<"\n";
    }
}
 
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    solve();
}