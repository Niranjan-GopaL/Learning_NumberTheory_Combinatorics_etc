#include <bits/stdc++.h>
using namespace std;

typedef long long ll ;


// 15 ms   0KB
int a[10000];
void initial_try(){
    int t,n,x,m=-1; cin >> t;
    while(t--){
        cin >> n >> x;
        for(int i=0; i<n; i++)cin >> a[i];
        for(int i=1; i<n; i++) m = max(m, a[i]-a[i-1]) ;
        m = max( m , a[0] - 0) ; m = max( m , (x-a[n-1]) * 2 ) ;
        cout << m << "\n";
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


// 32ms 0KB
void how_is_this_worse(){
    int t,n,r,l,x,m=-1; cin >> t;
    while(t--){
        cin >> n >> x;
        r=0;l=0;
        for(int i=0; i<n; i++){ cin >> r; m = max(m, r-l) ; l = r; }
        m = max( m , (x-l)*2 ) ;
        cout << m << "\n";
        m = -1 ;
    }
}



int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    // initial_try();
    how_is_this_worse() ; 
}