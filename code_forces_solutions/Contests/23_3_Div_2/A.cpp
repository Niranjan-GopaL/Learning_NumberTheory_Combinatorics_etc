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



int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> s(n,0); 
        for(int i=0;i<n;i++)cin >> s[i] ;

        debug(s);
        ll i=0;
        // all leading 0s are irrelevant
        while(i <n && s[i]==0)i++;       
        while(i <n && s[i]==1)i++;       
        // first 0 after strings of 1

        ll c0=0,c1=0,ans=0,flag=0;
        while(i<n){
            while(i <n && s[i]==0){i++; c0++;}       
            while(i <n && s[i]==1){i++; c1++;flag=1;}
            if(flag){ans+=c0;}
            debug(i,ans);
            // cout << c0 << " " << c1 << "\n";
            if(c1<c0)c0=c0-c1;else c0=0;
            c1=0,flag=0;
        }
        cout << ans << "\n";
    }   
}

/*
1
8
0 1 1 1 0 1 1 0
*/

/*
1
12
0 1 0 0 0 1 1 0 0 1 0 1
*/

/* MISUNDERSTOOD THE QUESTION AND implemented something else for 2 hours
        // i -> first 0 from left
        // j -> first 1 from after that zero
        ll i=0,j=0,cnt = 0;

        // i-> first zero AFTER the first 1
        while(j <n && s[j]!=1)j++; 
        i = j + 1;
         while(i<n && s[i]!=0)i++;
        // now we have -----------j------i-------
        // now we have -----------1------0-------
        cout << i << " " << j << "\n";

        // j -> first 1 after i
        j = i+1;

        while(i<n && j >0 && i!=j){
            while(i<n && s[i]!=0)i++;
            while(j <n && s[j]!=1)j++; 
            cout << i << " " << j << "\n";
            if(i<n && j <n){cnt++;i++;j++;}
        }
        cout << cnt << "\n" ;

*/