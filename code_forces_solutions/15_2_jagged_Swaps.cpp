#include <iostream>
using namespace std;

int a[10000];

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t,n; cin >> t;
    while(t--){
        cin >> n;
        for(int i=0;i<n;i++)cin >> a[i];
        if(a[0]!=1)cout << "NO\n" ;
        else cout << "YES\n" ;
    }
}