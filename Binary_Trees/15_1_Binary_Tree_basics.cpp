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


// inorder
void lnr(TreeNode* node){
    if(node){
        lnr(node->left);
        cout << node->val << " " ;
        lnr(node->right);
    }
}  

void lnr_iterative(TreeNode* root){
    stack<TreeNode*> st;st.push(root) ;
    while(!st.empty()){

        while(!st.top()){st.push(root->left);root=root->left;}

        st.pop(); root = st.top() ; st.pop() ;
        cout << root->val << " ";

        root = root-> right ; st.push(root);
    }    
}

void lnr_iterative1(TreeNode* root) {
    stack<TreeNode*> st;
    
    while (root || !st.empty()) {
        while (root) {
            st.push(root);
            root = root->left;
        }

        root = st.top(); st.pop();

        cout << root->val << " ";

        root = root->right;
    }
}


void bfs(TreeNode* root){
    queue<TreeNode*>q; q.push(root);

    while(!q.empty()){
        root = q.front() ; q.pop();
        cout << root->val << " ";
        if(root->left)q.push(root->left);
        if(root->right)q.push(root->right);
    }
}


void reverse_lvl_order(TreeNode* root){
    queue<TreeNode*>q; q.push(root);
    vector<int> ans; ans.pb(root->val) ;

    while(!q.empty()){
        root = q.front() ; q.pop();
        cout << root->val << " ";
        if(root->right){ q.push(root->right); ans.pb(root->right->val) ; } 
        if(root->left) { q.push(root->left);  ans.pb(root->left->val)  ;}
    } cout << "\n";

    for(int i = ans.size()-1 ; i>=0 ; i--)cout << ans[i] << " " ; 
}



TreeNode* create_mirror_Tree(TreeNode* root){
    queue<TreeNode*>q; q.push(root);
    TreeNode* root_ = new TreeNode(root->val);
    // this will point to root_ 
    // BUT YOU ARE CONSTATNLY OVERWRITING `root_` inside the while()
    // changing it is curr in the while loop was the key
    TreeNode** temp_root = &root_ ;
    queue<TreeNode*>q_; q_.push(root_);

    TreeNode* curr;
    while(!q.empty()){
        root = q.front() ; q.pop();
        curr = q_.front() ; q_.pop();

        // cout << root->val << " ";
        if(root->right){ q.push(root->right); curr->left = new TreeNode(root->right->val) ; q_.push(curr->left) ; }
        if(root->left){q.push(root->left); curr->right = new TreeNode(root->left->val) ; q_.push(curr->right) ; }
    }

    return *temp_root ;
}

void left_view(TreeNode* root){
    queue<pair<TreeNode*,int> >q; q.push({root,0});
    int level=0, required_level=0 ;

    while(!q.empty()){
        root = q.front().f ; level = q.front().s ; q.pop();
        if(level==required_level){cout << root->val << " " ; required_level++;}
        if(root->left)q.push( {root->left, level+1});
        if(root->right)q.push({root->right, level+1});
    }
}

void right_view(TreeNode* root){
    queue<pair<TreeNode*,int> >q; q.push({root,0});
    int level=0, required_level=0 ;

    while(!q.empty()){
        root = q.front().f ; level = q.front().s ; q.pop();
        if(level==required_level){cout << root->val << " " ; required_level++;}
        if(root->right)q.push({root->right, level+1});
        if(root->left)q.push( {root->left, level+1});
    }
}


int get_height(TreeNode* root){
    queue<pair<TreeNode*,int> >q; q.push({root,0});
    int level=0, max_level=0 ;

    while(!q.empty()){
        root = q.front().f ; level = q.front().s ; q.pop();
        max_level = max(level, max_level) ;
        if(root->left)q.push( {root->left, level+1});
        if(root->right)q.push({root->right, level+1});
    }
    return max_level+1 ; 
}



int main(){

    TreeNode root(1);
    root.left = new TreeNode(2);
    root.right = new TreeNode(3);

    root.left->left = new TreeNode(4);
    root.left->right = new TreeNode(5);
    root.right->left = new TreeNode(6);
    root.right->right = new TreeNode(7);

    root.left->left->left = new TreeNode(8);
    root.left->left->right = new TreeNode(9);
    root.left->right->left = new TreeNode(10);
    root.right->right->right = new TreeNode(11);
    
    // lnr_iterative1(&root);
    // bfs(&root);
    // reverse_lvl_order(&root);

    // TreeNode* tmp = create_mirror_Tree(&root) ;
    // lnr(&root);
    // cout << "\n\n-------------------\n\n" ;
    // lnr(tmp);

    // left_view(&root);    
    // cout << "\n" ;
    // right_view(&root);    
    
    // get_height(&root);


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