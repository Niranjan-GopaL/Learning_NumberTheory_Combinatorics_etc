#include <bits/stdc++.h>
using namespace std;

typedef long long        ll ;      

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif


/*
X.........
X.........
X.........
X.........
X.........
X.........
X.........
X.........
X.........
X.........
*/


//  How did others do;
// IT took me 2 hour for this question 


int main(){

    int t; cin >>t ;
    while(t--){
        vector<string> a; string s;

        for(int i=0;i<10;i++){cin >>s; a.push_back(s);}
        int sum1=0,p=0;
        
        for(int i=0;i<10;i++)for(int j=0;j<10;j++){
            if(a[i][j]=='X'){
                // cout << "---------------------\n";
                // debug(i);
                int x = ceil(abs(i - 4.5));
                // debug(x);
                // distance from 4.5 is less than x -> good shot -> 6-val
                if( ceil(abs(j - 4.5)) <= x) p = 6-x ;
                // distance from 4.5 is less than x -> good shot -> 6-val
                else p = 6 - ceil(abs(j-4.5));
                debug(p);
                sum1+=p;
                // cout << "---------------------\n";
            }
        }
        cout << sum1 << "\n";
    }
}
