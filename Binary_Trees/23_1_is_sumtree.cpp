#include <bits/stdc++.h>
using namespace std;

typedef long long     ll ;      
typedef vector<ll>    vi ;
typedef pair<int,int> pi ;

#define pb      push_back
#define mp      make_pair
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


pair<int,bool>  dfs(TreeNode* node){
    if(!node->left && !node->right)return {node->val, true} ;

    cout << node->val << " --> "  ;
    auto l_tree = (node->left) ?  dfs(node->left) : make_pair(0, true)  ;
    auto r_tree = (node->right) ? dfs(node->right) : make_pair(0, true)  ;
    
    if( l_tree.s && r_tree.s &&  (node->val == l_tree.f + r_tree.f)  )return {node->val + l_tree.f + r_tree.f , true };
    else return { node->val + l_tree.f + r_tree.f , false} ;
}




bool is_sum_tree(TreeNode* root){
    return dfs(root).s ;
}



int main(){
    TreeNode root(3);
    root.left  = new TreeNode(2);
    root.right = new TreeNode(1);

    // root.left->left   = new TreeNode(0);
    root.left->right  = new TreeNode(33);
    // root.right->left  = new TreeNode(6);
    // root.right->right = new TreeNode(7);

    // root.left->left->left    = new TreeNode(8);
    // root.left->left->right   = new TreeNode(9);
    // root.left->right->left   = new TreeNode(10);
    // root.left->right->right  = new TreeNode(11);
    
    cout << is_sum_tree(&root);

    // Don't forget to deallocate the memory to avoid memory leaks
    // Implement a proper destructor or use smart pointers for automatic memory management
    // delete root.left->left->right;
    // delete root.left->left->left;
    // delete root.left->right->left;
    // delete root.right->right->right;
    // delete root.left->left;
    // delete root.left->right;
    // delete root.right->left;
    // delete root.right->right;
    delete root.left;
    delete root.right;
}