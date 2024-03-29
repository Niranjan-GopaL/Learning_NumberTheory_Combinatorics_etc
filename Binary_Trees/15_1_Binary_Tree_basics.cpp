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



void top_view(TreeNode* root){

    queue<pair<TreeNode*,int> >queue_left_view; queue_left_view.push({root,0});
    queue<pair<TreeNode*,int> >queue_right_view; queue_right_view.push({root,0});

    int level=0, required_level=0 ; vector<int>left_view;
    while(!queue_left_view.empty()){
        root = queue_left_view.front().f ; level = queue_left_view.front().s ; queue_left_view.pop();
        if(level==required_level){left_view.pb(root->val); required_level++;}
        if(root->left)queue_left_view.push( {root->left, level+1});
        if(root->right)queue_left_view.push({root->right, level+1});
    }
    cout << "\n";
    int l=0, r=left_view.size()-1 ;
    while(l<r){swap(left_view[l],left_view[r]); l++; r--;}

    vector<int>right_view; required_level = 0;
    while(!queue_right_view.empty()){
        root = queue_right_view.front().f ; level = queue_right_view.front().s ; queue_right_view.pop();
        if(level==required_level){right_view.pb(root->val) ; required_level++;}
        if(root->right)queue_right_view.push({root->right, level+1});
        if(root->left)queue_right_view.push( {root->left, level+1});
    }

    for(int i=0;i<left_view.size()-1;i++)cout << left_view[i] << " " ;
    for(int i=0;i<right_view.size();i++) cout << right_view[i] << " ";
}



void zig_zag_traversal(TreeNode* root){

    queue<pair<TreeNode*,int> >queue_left; queue_left.push({root,0});
    queue<pair<TreeNode*,int> >queue_right; queue_right.push({root,0});

    int level=0 ; vector< pair<TreeNode*,int> >left_level;
    while(!queue_left.empty()){
        root = queue_left.front().f ; level = queue_left.front().s ; queue_left.pop();
        left_level.pb({root,level});
        if(root->left)queue_left.push( {root->left, level+1});
        if(root->right)queue_left.push({root->right, level+1});
    }

    vector< pair<TreeNode*,int> >right_level;
    while(!queue_right.empty()){
        root = queue_right.front().f ; level = queue_right.front().s ; queue_right.pop();
        right_level.pb({root,level});
        if(root->right)queue_right.push({root->right, level+1});
        if(root->left)queue_right.push( {root->left, level+1});
    }
    vector<int> zig_zag;
    // toggling from which vector we take in the elements
    // every time we get to an element with NEXT_LEVEL, toggle the thing
    int toggle=0, next_level =1;
    int n = left_level.size();
    for(int i=0;i<n;i++){
        if(left_level[i].s == next_level){ toggle = !toggle ; next_level++; }
        if(!toggle) zig_zag.pb(left_level[i].f->val);
        else zig_zag.pb(right_level[i].f->val);
    }

    for(int i: zig_zag)cout << i << " " ;
}



void diagonal_traversal(TreeNode* root){

    TreeNode* temp = root ;
    // TreeNode* temp = root , curr ; //[ !! here curr is a TreeNode AND NOT A TreeNode* !!
    TreeNode* curr;


    int count = 1, max_diagonals = 0, i = 0;
    // handle count = 0


    while(!temp->left){temp = temp->left;max_diagonals++;}
    vector<int> ans;
    while(!temp){temp = temp->left;max_diagonals++;}

    while(count < max_diagonals){
         while(temp){
            while(i<count){
                curr = temp->left ; i++ ;
            }
            while(curr){
                ans.pb(curr->val);curr = curr->right ;
            }
            temp = temp->right ;
         }
         count++; temp = root;
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

    // top_view(&root);

    // zig_zag_traversal(&root);



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