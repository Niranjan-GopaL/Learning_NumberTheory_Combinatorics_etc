#include <bits/stdc++.h>
using namespace std;

typedef long long ll ;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t,x,n,c=0; cin >> t;
    string s;
    while(t--){
        cin >> x; cin >> s; n = s.length();
        bool fn = false;
        for(int i=0; i<n-2; i++){
            if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.' ){ fn=true; break; }
        }
        if(fn){ cout << "2\n" ; } else {
            for(char ch:s)if(ch=='.')c++;
            cout << c << "\n" ;
        }
        c=0;
    }
}