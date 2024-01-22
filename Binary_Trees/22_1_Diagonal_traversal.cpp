#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define pb      push_back
#define f       first
#define s       second
#define len(A)  sizeof(A) / sizeof(A[0])


 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;

    //  these 3 are the constructors that parametrically defines the object when we create them
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };


void diagonal_traversal(TreeNode* root){
    if (!root) {
        cout << "The tree is empty.\n";
        return;
    }

    queue<TreeNode*> q; q.push(root);
    // this RETURNS FALSE!! obviously since queue is NOT EMPTY
    cout << q.empty() << "\n" ;
    
    while(!q.empty()){
        root = q.front() ; q.pop();
        cout << "\n-------- QUEUE POPPED " << root->val << "\n" ;
            while(root){
                cout << root->val << " ";
                if(root->left)q.push(root->left);
                root = root->right ;
            }
    }


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
    root.left->right->right = new TreeNode(11);
    
    diagonal_traversal(&root);

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

