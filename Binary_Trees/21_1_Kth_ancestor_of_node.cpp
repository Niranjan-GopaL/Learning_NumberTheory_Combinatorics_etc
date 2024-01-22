#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define pb      push_back
#define f       first
#define s       second
#define len(A)  sizeof(A) / sizeof(A[0])




/*

2 major methodes to improve O(N) -> O(LogN) 
-> try divinding by 2  { Binary search, Divide and Conquer }
-> use POWERS of 2    { sparse table, 
                        binary lifting(in trees; that's what this code is !) , 
                        segment trees , 
                        fenwick trees 
                      }


BRUTE FORCE way to find kth parent; O(N)
repeat k:
    v = parent[v]

but if we have a BLACK BOX that can instantaneously give (any power of 2)th ancestor
=> we can find any kth ancestor in O(logN)   since K = 1 + 2 + 16 + .... (K represented as logK number's sum )

repeat for 1 in log(K):
    v = 2k_parent[ power_of_2 ]


*/


class TreeAncestor {
    vector<vector<int>> up; // int up[N][20];
    vector<int> depth;
    int LOG;
public:

    TreeAncestor(int n, vector<int>& parent) {
        LOG = 0;
        while((1 << LOG) <= n) LOG++;
        
        up = vector<vector<int>>(n, vector<int>(LOG));
        depth = vector<int>(n);
        // up[v][j] is 2^j -th ancestor of node v
        parent[0] = 0;
        for(int v = 0; v < n; v++) {
            up[v][0] = parent[v];
            if(v != 0) depth[v] = depth[parent[v]] + 1;
            for(int j = 1; j < LOG; j++)  up[v][j] = up[ up[v][j-1] ][j-1];
        }
    }

    int getKthAncestor(int node, int k) {
        if(depth[node] < k) {
            return -1;
        }
        for(int j = LOG - 1; j >= 0; j--) {
            if(k >= (1 << j)) {
                node = up[node][j];
                k -= 1 << j;
            }
        }
        return node;
    }
};