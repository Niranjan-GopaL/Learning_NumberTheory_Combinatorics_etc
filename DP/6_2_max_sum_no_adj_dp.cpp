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


int rec(vector<int>& nums, int idx, vector<int>& dp){
    if (idx >= nums.size()) return 0;
    if (dp[idx] != -1)
        return dp[idx];
    return dp[idx] = max( rec(nums, idx + 1, dp),  nums[idx] + rec(nums, idx + 2, dp));
}


// Function to return max sum such that 
// no two elements are adjacent 
int FindMaxSum(vector<int> arr, int n)
{
    int incl = arr[0];
    int excl = 0;
    int excl_new;
    int i;
 
    for (i = 1; i < n; i++) {
        // Current max excluding i
        excl_new = max(incl, excl);
 
        // Current max including i
        incl = excl + arr[i];
        excl = excl_new;
    }
 
    // Return max of incl and excl
    return max(incl, excl);
}
 
int main()
{
    vector<int> arr = { 5, 5, 10, 100, 10, 5 };
    int N = arr.size();
 
    cout << FindMaxSum(arr, N);
    return 0;
}