#include <iostream>
using namespace std;

#define ll long long 

int main(){
    ll t,x;cin >> t;
    for(;t--;){
        cin >> x;
        cout << -(x-1) << " " << x << "\n";
    }
}