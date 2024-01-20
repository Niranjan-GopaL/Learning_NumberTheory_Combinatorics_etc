#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define pb      push_back
#define f       first
#define s       second

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;

    //  these 3 are the constructors that parametrically defines the object when we create them
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

// 私　の　algorithm　；
// ternary　オペラと　元請も　　ツヨ　　です　；
pair<int,int> dfs(TreeNode* root){
    if(!root){ return {1,0}; }

    auto left_tree = dfs(root->left) ; auto right_tree = dfs(root->right) ;
    // ( children node is balanced )  and (height difference between left and right is at most 1) => BALANCED
    // SUPER POWER OF TERNARY OPERATOR
    int balanced = left_tree.f  &&  right_tree.f &&  ( abs(left_tree.s - right_tree.s) <= 1) ? 1 : 0 ;
    return {balanced , 1 + max( right_tree.s, left_tree.s)} ;
}


// 「Striver」 の　 美しい　居キュ　です　
//　二　code lines added to get_height algorithm
// it works exactly equivalent to above code
int dfs_(TreeNode* node){
    if(!node) return 0;
    int left_height = dfs_(node->left); int right_height = dfs_(node->right) ; 

    // this one line is REALLY GOOD !!
    if( left_height == -1 || right_height == -1 || abs(left_height-right_height) >1 ) return -1;

    return 1 + max(left_height, right_height) ;
}


bool is_balanced(TreeNode* root){
    return dfs(root).first ;  // my_dfs
    // return dfs_(root) != -1 ; //striver's methode
}
















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
    root.right->right->right = new TreeNode(11);
    
    cout << "IS THE TREE BALANCED ? " << is_balanced(&root) ;


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
