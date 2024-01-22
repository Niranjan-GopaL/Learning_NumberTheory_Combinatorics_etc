#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define pb      push_back
#define f       first
#define s       second
#define len(A)  sizeof(A) / sizeof(A[0])

template <typename T> const T& max(const T& pA, const T& pB, const T& pC)
{ return max(pA, max(pB, pC)); }

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
    //  these 3 are the constructors that parametrically defines the object when we create them
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };


/*

   1 
2    3

each node returns the sum of the tree to which it is a root of 

*/

int max_sum;
int dfs(TreeNode* node, int sum){
    if (!node) return 0;
    int l_sum = dfs(node->left, sum);
    int r_sum = dfs(node->right, sum);
    sum = l_sum + r_sum + node->val ;
    max_sum = max(l_sum, r_sum, sum) ;
    return sum;
}


int max_sum_subtree(TreeNode* root){
    dfs(root,0);
    return max_sum;
}

//   /|
// /  |
// ___|
int main(){
    TreeNode root(1);
    root.left  = new TreeNode(2);
    root.right = new TreeNode(3);

    root.left->left   = new TreeNode(4);
    root.left->right  = new TreeNode(5);
    root.right->left  = new TreeNode(6);
    root.right->right = new TreeNode(7);

    root.left->left->left    = new TreeNode(8);
    root.left->left->right   = new TreeNode(9);
    root.left->right->left   = new TreeNode(10);
    root.left->right->right  = new TreeNode(11);
    
    cout << max_sum_subtree(&root);

    // Don't forget to deallocate the memory to avoid memory leaks
    // Implement a proper destructor or use smart pointers for automatic memory management
    delete root.left->left->right;
    delete root.left->left->left;
    delete root.left->right->left;
    delete root.right->right->right;
    delete root.left->left;
    delete root.left->right;
    delete root.right->left;
    delete root.right->right;
    delete root.left;
    delete root.right;
}