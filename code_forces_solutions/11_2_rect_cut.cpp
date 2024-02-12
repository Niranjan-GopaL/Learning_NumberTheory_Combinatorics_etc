#include <iostream>
using namespace std;

#define ll long long

// SO MUCH CLEVERER SOLUTION 
void kotatsugame_solution(){
    int T; cin >> T;
    int A,B;
    int a,b, c,d;
    for(;T--;){
        cin >> A >> B;
        bool fn = false;
        for(int i=0; i<2;i++){
            if(A%2==0) {
                a=A/2; b=B*2;
                c = A; d = B;
                if(a>b)swap(a,b);
                if(c>d)swap(c,d);
                if(a!=c || b!=d)fn=true;
            } swap(A,B);
        }
        cout << fn ? "YES\n" : "NO\n" ;
    }
}

void my_way(){
    ll a,b,t; cin >> t;
    while(t--) {
        cin >> a; cin >> b;
        if( a%2 == 1 && b%2 == 1){ cout << "NO\n" ;continue; }
        // Now onwards a >= b : and we have at least one even ;
        if(a<b)swap(a,b);

        // if odd is bigger and even is smaller -> YES ;
        if( a%2==1 && b%2==0  ){ cout << "YES\n"; continue; }

        // 2m  2n+1 (bigger must be even and it's half must be odd and equal to other) -> NO
        if( a%2==0 && b%2==1 && a/2==b ){ cout << "NO\n"; continue; }

        cout << "YES\n";
    }
}


int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    kotatsugame_solution();
    // my_way();
}