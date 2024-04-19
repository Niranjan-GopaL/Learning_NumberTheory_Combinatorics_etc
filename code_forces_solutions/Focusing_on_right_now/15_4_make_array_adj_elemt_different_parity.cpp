#include <bits/stdc++.h>
using namespace std;

typedef long long ll ;

int a[100];
void solve(){
/*
    MINIMUM OP TO MAKE THE ARRAY GOOD
    e . e => e
    e . o => e
    o . o => o

    which all elements to select to product and replace
    => e o o e o o e o e o o o e

            ans
    e e o => 1 
    o o o => 2 
    o e o o o o o e e 

    if 2 evens are together it's has to 
    e e o o o o  o o o o o o  ... no matter how many odd numbers you can't make an o , e.0 -> e
    => so combine the 2 evens to 1


*/




    int t,n; cin >> t;
    while(t--){
        cin >> n ;

        for(int i=0; i<n; i++){
            cin >> a[i];
        }


    }
}



int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    solve();
}
