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

const ll arr_template_size = 1e6;

// global int   arrays are initialized to 0
ll a[arr_template_size];
ll b[arr_template_size];
ll c[arr_template_size];

// go to snippets generator .code
/*
1. copy code; paste in the website; write the trigger string
2. copy the json
3. "configure user snipper" (cmd pallate)
    3a. "cpp.json" ( add it there ) 
        OR
    3b. "new global snippet"    (available throughout all language )
*/




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