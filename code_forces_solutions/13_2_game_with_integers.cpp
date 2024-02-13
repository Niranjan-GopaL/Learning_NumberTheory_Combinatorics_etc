#include <bits/stdc++.h>
using namespace std;

typedef long long ll ;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t,x;cin >>t;
    while(t--){
        cin >> x;
        cout << (x%3==0 ? "Second\n" : "First\n");
    }
}