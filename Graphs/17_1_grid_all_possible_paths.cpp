#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define pb      push_back

int n;
vector<vector<int>> vis;
vector<vector<int>> grid;
vector<string> ans;
vector<vector<int> > dir = { {0,1} , {0,-1} , {1,0} , {-1,0} } ; 


bool is_valid( int i, int j ){
    if( (i<=0 && j>=n) && !vis[i][j] && grid[i][j] )return true;
    else return false;
}

int dfs(int r, int c, string path){
    if(r==n-1 && c==n-1){ans.pb(path);return;}

    if(is_valid(r+1,c)){
        vis[r+1][c] = 1;
        dfs(r+1,c,path+"U");
        vis[r+1][c] = 0;
    }


}


int main(){


}