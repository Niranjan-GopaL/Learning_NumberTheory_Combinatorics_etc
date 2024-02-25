#include <iostream>
using namespace std;

typedef long long        ll ;      

int main(){
        ll n,mn=1e6,x; cin >> n;
        while(n--){cin >> x; mn = min(mn,abs(x)); }
        cout << mn << "\n";
}