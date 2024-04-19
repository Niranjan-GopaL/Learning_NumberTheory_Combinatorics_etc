#include <iostream>
#include <vector>
using namespace std;

typedef long long        ll ;      


int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll q,n,num; cin >> q;
    while(q--){
        vector<int> a;int mx,x,mx_i=0;
        cin >> n;
        for(int i=0;i<n;i++){cin >> num; a.push_back(num); if(!i)mx=a[i];x=max(mx,a[i]); if(mx!=x){mx=x;mx_i=i;}; }

        int i=1;int mn;
        while(i<=n-2){
            while(a[i]==0)i++;
            while( a[i-1]!=0 && a[i]!=1 && a[i+1]!=0 ){ 
                int x = min(a[i+1], a[i-1]);
                mn = min(a[i]/2, x);
                a[i-1]-=mn;a[i]-=2*mn;a[i+1]-=mn;
            }
            // debug(a,i);
            i++;
        }

        bool fn = true;
        for(int i=0;i<n;i++)if(a[i]!=0){fn = false;break;} 
        cout << (fn ? "YES\n" : "NO\n");
    }
}
