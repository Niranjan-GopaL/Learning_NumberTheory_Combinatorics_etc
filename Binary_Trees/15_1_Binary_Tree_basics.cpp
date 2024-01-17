#include <bits/stdc++.h>
using namespace std;


 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;

    //  these 3 are the constructors that parametrically defines the object when we create them
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };


// inorder
void lnr(TreeNode* node){
    if(node){
        lnr(node->left);
        cout << node->val << " " ;
        lnr(node->right);
    }
}  

void lnr_iterative(TreeNode* root){
    stack<int> st; 
}


// preorder
void nlr(TreeNode* node){
    if(node){
        cout << node->val << " " ;
        nlr(node->left);
        nlr(node->right);
    }
}

// postorder
void lrn(TreeNode* node){
    if(node){
        lrn(node->left);
        cout << node->val << " " ;
        lrn(node->right);
    }
}




int main(){

    TreeNode root(1);

    root.left->val = 2;
    root.right->val = 3;

    root.left->left->val = 4;
    root.left->right->val = 5;
    root.right->left->val = 6;
    root.right->right->val = 7;

    root.left->left->left->val = 8;
    root.left->left->right->val = 9;
    root.left->right-> left->val = 10;
    root.right->right->right->val = 11;
}