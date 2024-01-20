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



// O( n * H(tree) )  ~ O(n^2)  { in case of a skewed tree }
int diameter_of_tree(TreeNode* root){
    if(!root) return 0; 

    int diameter_from_left_Tree = diameter_of_tree(root->left);
    int diameter_from_right_Tree = diameter_of_tree(root->right);

    // this makes the computation expensive 
    int diameter_by_combination_of_Left_and_Right = get_height(root->left) + 1 + get_height(root->right) ;

    return max(diameter_by_combination_of_Left_and_Right , diameter_from_right_Tree, diameter_from_right_Tree );

}


// Solution is to make the computation of hieght simulatneously done when we do the recursion
// O(N)
pair< int,int> get_diameter_fast(TreeNode* root ){
    // {diameter, height }
    if(!root) return {0,0};

    pair<int,int> l = get_diameter_fast(root->left);
    pair<int,int> r = get_diameter_fast(root->right);

    int H_l = l.s,   H_r = r.s;
    int dia_l = l.f, dia_r = r.f ;

    // Height = max( left_height, right_height ) + 1
    // diameter = max(  left_tree diameter , right_Tree diameter , combination of both right_tree and left_tree => hieght_l + right_l + 1 )
    return { max(dia_l, dia_r, H_l + 1 + H_r) , max(H_l , H_r) + 1  } ;
}




int main(){

}