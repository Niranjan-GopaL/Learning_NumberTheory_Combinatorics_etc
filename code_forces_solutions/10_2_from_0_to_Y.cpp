#include <bits/stdc++.h>
using namespace std;

#define ll long long 
/*
test cases used :-
1
25 1337

1
2 7

1
3 42
*/

int main(){
    ll t,x=0 ,y=0 ,k=0,p = 0,cnt=0 ; cin >> t;
    while(t--){
        cin >> x >> y; 
        
        // x * pow(10,p+1) % y <---- THIS IS ERROR cuz POW() returns double values
        y % x * (ll)(pow(10, p+1)+1e-9)    != y ; //<--- this was always false ; Learnt an important LESSON
        // % HAS MORE PRECEDANCE than * so the mod always happened first
        while( y % (x * (ll)(pow(10, p+1)+1e-9)  )  != y ){cout << x * pow(10,p+1) << "\n"; p++;}  


        cout << "max_p : " << p << "\n" ;
        // think of edge cases later  ( what is x > y)
        while(p!= -1){
            while( k + x*pow(10,p) <= y ){ k += x*pow(10,p); cnt++; }
            p--;
            // cout << "p_now : " << p << " k :- " << k << " count_now : " << cnt << "\n" ;
        }
    
        if(k < y)cnt+=(y-k);
        cout << cnt << "\n" ;
        cnt = 0; p =0; k=0;
    }
}