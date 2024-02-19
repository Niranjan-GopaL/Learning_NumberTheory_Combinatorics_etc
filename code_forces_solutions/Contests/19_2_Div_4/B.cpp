#include <bits/stdc++.h>
using namespace std;

typedef long long        ll ;      


int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t,n; cin >> t;
    while(t--){
        cin >> n;
        vector<string> v; string s;
        for(int i=0;i<n;i++){cin >> s; v.push_back(s);}

        // THIS WAS WHERE I GOT seg fault in my first CF contest
        // I swaped it
        vector<int> cnt(n,0);

        for(int i=0; i<n;i++)
        for(int j=0;j<n;j++)
        if(v[i][j] == '1')cnt[i]++;


        int c=0, flag=0,flag_for_sq=0;
        for(int i=0;i<n;i++)if(cnt[i]){
            if(!flag){c=cnt[i]; flag=1;}
            else{
                if(cnt[i]==c)flag_for_sq = 1;
                break;
            }
        };
        cout << (flag_for_sq ? "SQUARE" : "TRIANGLE") << "\n" ;
    }
}