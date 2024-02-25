#include <bits/stdc++.h>
using namespace std;

typedef long long        ll ;      


int freq[256] = {0};

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    string s; cin >> s;
    for(char c : s)freq[c]++;
    int j=0;
    for(int i=40;i<256;i++)if(freq[i]==1){j=i;break;}
    for(int i=0;i<s.size();i++)if(s[i] == j)cout << i+1 << "\n";
}