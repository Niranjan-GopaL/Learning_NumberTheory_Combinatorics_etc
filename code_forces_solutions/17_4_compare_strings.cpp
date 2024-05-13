#include <bits/stdc++.h>
using namespace std;

typedef long long ll ;

/*
[NEW LEARNING !!]

LEARNING - 1

---------- this is what I initially went about it  ---------
JUST REMEMBER THIS
> -> ↓ ( Rigth is DOWN )
< -> ↑ ( Left is UP )
> > < > > < > 
3 2 1 2 1 0 1 0
-----------------EPIPHANY------------------------------------
Much better way is :-
given a >><>><>
3>2>1<2>1>0<1>0 <--- this is sooo much easier to UNDERSTAND than 
                     next element is > => smaller elem next in array
-----------------------------------------------------------

3 > 2 > 1 < 3 > 2> 1 < 2 > 1
2 > 1 > 0 < 2 > 1> 0 < 1 > 0

> > < > > < > 
3 2 1 2 1 0 1 0

2 1 0 1 0 -1 0 -1



-1
2
4
>><>><>
3 > 2 > 1 < 2 > 1 > 0 < 1 > 0

*/



void wrong_ans(){
    ll t,n; string s;cin >> t;
    while(t--){
        cin >> n >> s;
        ll c=0,mx=0,mn=0;
        for(char ch : s){
            c += (ch=='>') -1 ? : 1 ;
            mx = max(c,mx) ;
            mn = min(c,mn) ;
        }
        cout << mx + abs(mn) + 1 << "\n" ;
    }  
}


void solve(){
    ll t,n; string s;cin >> t;
    while(t--){
        cin >> n >> s;
        ll cnt_r=0,mx_r=0,cnt_l=0,mx_l=0;
        for(char c : s){
            if(c=='<'){cnt_r++; mx_r = max(mx_r,cnt_r);}
            else cnt_r = 0;
            if(c=='>'){cnt_l++; mx_l = max(mx_l,cnt_l);}
            else cnt_l = 0;
        }
        cout << max(mx_l,mx_r) + 1 << "\n" ;
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    solve() ; 
}