#include <bits/stdc++.h>
using namespace std;

#define ll             long long

// global stuff will be initialized fine
ll x,y,z;
ll n,m,k,q;


ll digit_sum(ll num){

    ll s = 0;
    while(num){
        s += num% 10;
        num /= 10;
    }
    return s;
    
}



bool diff_digit_sum(ll x, ll y){
    ll diff = abs(digit_sum(x) - digit_sum(y));
    if( diff <= 1)return true;
    return false;
}



int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> q;

    while (q--){
        cin >> n;

        if(!n&1) cout << n/2 << " " <<n/2 << '\n';
        else{
            x = n/2 ;
            y = x + 1;

            // x -> even; y -> odd 
            if( x&1 ) swap(x,y);

            while (!diff_digit_sum(x,y)){
                x /= 2;
                y += x;
            }

            cout << x << " " << y << '\n';            

        }
    }
    

    
    return 0;
}


