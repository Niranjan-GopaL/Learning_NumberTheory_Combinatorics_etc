#pragma GCC optimize("Ofast") 
#pragma GCC target("tune=native")
#include <bits/stdc++.h>
using namespace std;

typedef long long ll ;

int a[100];

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t,n,x,y; cin >> t;
    while(t--){
        cin >> n; // either c1 == n or c1 == n/2 or n/2 + 1 or c2
        int cnt1 = 0, cnt2 = 0;
        // if n == even
        if(n%2){
            for(int i=0;i<n;i++) cin >> a[i] ;

            int flag = 0, fn = 0;
            // cnt1 count of first elem
            x=a[0]; cnt1++; 
            for( int i=1; i<n; i++){
                if(a[i]==x)cnt1++;
                else{
                    if(!flag){ y=a[i];cnt2++;flag=1;} // first time seeing this 
                    else{
                        if(a[i] == y)cnt2++;
                        else { fn = 1;break; }
                }}
            }
            cout << cnt1 << cnt2 << "\n" ;
            if(fn){cout << "NO\n" ;}
            else{
                if(cnt1 == n || (cnt1 == n/2 && cnt2 == n/2) )cout << "YES\n" ;
                else cout << "NO\n";
            }
        }else{
            for(int i=0;i<n;i++) cin >> a[i] ;
             int flag = 0, fn = 0;

            // cnt1 count of first elem
            x = a[0]; cnt1++; 
            for( int i=1; i<n; i++){
                if(a[i]==x)cnt1++;
                else{
                    if(!flag){y=a[i];cnt2++;flag=1;} // first time seeing this 
                    else{
                        if(a[i] == y)cnt2++;
                        else { fn = 1;break; }
                }}
            }
            if(fn)cout << "NO\n" ;
            else{
                if(cnt1 == n || (cnt1 == n/2+1 && cnt2 == n/2) || (cnt1 == n/2 && cnt2 == n/2+1) )cout << "YES\n" ;
                else cout << "NO\n";
                }
        }
    }
}

/*
5
2
8 9
3
1 1 2
4
1 1 4 5
5
2 3 3 3 3
4
100000 100000 100000 100000
*/