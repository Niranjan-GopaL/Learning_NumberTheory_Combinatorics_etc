#pragma GCC optimize("O3")
// Higher optimization levels can result in faster code 
// but might also increase compilation time.


#pragma GCC optimize("unroll-loops")
// This pragma suggests the compiler to unroll loops. 
// Loop unrolling is a compiler optimization technique where 
// the loop body is duplicated to reduce the overhead of loop control code 
// and potentially increase performance


#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
// This pragma specifies the target architecture features. 
// In this case, it is specifying that the code is optimized for processors 
// that support AVX2 (Advanced Vector Extensions 2), 
// BMI (Bit Manipulation Instructions), 
// BMI2, POPCNT (Population Count), and 
// LZCNT (Leading Zero Count).


#include <bits/stdc++.h>
using namespace std;

typedef long long        ll ;      
typedef vector<int>      vi ;
typedef pair<int,int>    ii ;

#define pb      push_back
#define mp      make_pair
#define f       first
#define s       second
#define len(A)  sizeof(A) / sizeof(A[0])
#define all(vec) (vec).begin(), (vec).end()

template <typename T>  T& max( T& pA,  T& pB,  T& pC) { 
    return max(pA, max(pB, pC)); 
}

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



signed main(){
    auto start_time = chrono::high_resolution_clock::now();

    ios::sync_with_stdio(0); cin.tie(0);
    cin.tie(0)->sync_with_stdio(0); // All outputs are AFTER ALL INPUTS in print screen ;
    // a bit faster 
    int a, b;

    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end_time - start_time);
    cout << "Time taken: " << duration.count() << " microseconds" << endl;


    scanf("%d %d", &a, &b); 
    printf("%d %d\n", a, b);

    string s,x;
    getline(cin, s); 
    while (cin >> x) { /*code*/ }

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); // now use cin and cout

     long long y = 123456789123456789LL;
}

// Contains stuff that I made for myself ; 
// will be updated frequently as I get more and more understanding of the subject ;