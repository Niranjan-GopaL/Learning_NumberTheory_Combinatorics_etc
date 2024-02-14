#include <bits/stdc++.h>
using namespace std;

typedef long long ll ;

int a[10000];

void failed(){
    int t,n,x,m=-1; cin >> t;
    while(t--){
        cin >> n >> x; cin >> a[0] ;
        for(int i=1; i<n; i++){ cin >> a[i]; m = max(m, a[i]-a[i-1]) ;}
        cout << m << "\n";
        m = max( m , x-a[n-1]*2 ) ;
        m = -1 ;
    }
}
/*
3
3 7
1 2 5
3 6
1 2 5
1 10
7
*/

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t,n,x,m=-1; cin >> t;
    while(t--){
        cin >> n >> x;
        for(int i=0; i<n; i++)cin >> a[i];
        for(int i=1; i<n; i++) m = max(m, a[i]-a[i-1]) ;
        m = max( m , a[0] - 0) ;
        m = max( m , (x-a[n-1]) * 2 ) ;
        cout << m << "\n";
        m = -1 ;
    }

}