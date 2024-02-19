#include <iostream>
using namespace std;


int main(){
    cin.tie(0)->sync_with_stdio(0);
    int cntA=0;
    int t; cin >> t;
    string s;
    while(t--){
        cin >> s;
        for(char c : s)if(c=='A')cntA++;
        cout << (cntA >= 3 ? 'A' : 'B') << "\n";
        cntA = 0;
    } 

}