#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vec vector
#define pb push_back
#define fi(a,b)        for(ll i=a; i<b; i++)



// precomputed list of primes
vec<ll> primes;


void sieve(ll n){

    vector<bool> is_prime(n+1, true);

    fi(2,int(sqrt(n))+1)
    {
        if (is_prime[i])

            // MUCHH MORE EFFICIENT 
            for(ll j=i*i; j<=n; j+=i)is_prime[j] = false;  
            // this is easier to understand. we replace 
            // j=2*i (here we simply put already made true numbers as true)  
            // with j=i^2 (NO DOUBLE COUNTING !!! )
            // for(ll j=2*i; j<=n; j+=i)is_prime[j] = false;  
         
    }

    fi(2,n+1)
        if (is_prime[i])
            primes.pb(i);
}



// Really clever algorithm
vec<ll> prime_factorisation(ll x){
    vec<ll> ret;

    // we use our precomputed list of primes
    for (ll p : primes){

        if (p*p > x){

        // we reach here after comparing all smaller primes
        // x can't 
            if(x>1){
                ret.pb(x);
                x = 1;
            }
        }else
        // we take as much of prime p we can, from x.
        // since x = p1^m . p2^n . p3^c .
        // after this loop our x -> x/(p1 ^ m) all the m p1 primes are taken
        {
            while (x%p == 0){
                ret.pb(p);
                x /= p ;
            }   
        }   
    }
    
    return ret;
}




int main(){
    int n;

    // remember the given number can also be prime.
    // So we need to sieve till that particular prime.

    // Better way =>
    // or check for primality for n using millar rabin AND 
    // 1. if it's prime ----> answer is that number itself
    // 2. if it's not   ----> you only have to sieve till sqrt(n) 
    //                          finding primes between [2 root n] 
                              
    cin >> n;

}














