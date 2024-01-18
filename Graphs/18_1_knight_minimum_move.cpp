#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define pb      push_back
#define f       first
#define s       second

// target is (n,m)
int n,m;

// this gave seg_fault
// vector<vector<int>> vis(n, vector<int>(max(n,m)+2,0));

vector<vector<int>> vis(100, vector<int>(100,0));

// finally started working with pairs
vector<pair<int,int> > dir = { {1,2} , {1,-2} , {-1,2} , {-1,-1} ,
                              {2,1} , {2,-1} , {-2,-1}, {12,1}} ; 


// BEAST !
bool is_valid(int r, int c){
    return (r>=1 && r<=n+2) && (c>=1 &&c<=n+2) && !vis[r][c] ;
}


int bfs(){
    int level_of_bfs=0;

    // { {r,c} , level_of_bfs }
    queue< pair < pair<int, int> , int > >q;  q.push({ {1,1} , level_of_bfs} ); 
    int r,c,new_r,new_c,level ;

    while( !q.empty() ){
        r = q.front().f.f ; c = q.front().f.s ;
        level = q.front().s ;
        q.pop();
        cout << "PAIR POPPED " << r << "  " << c  << " and they have been visted ? " << vis[r][c] << "\n" ;

        if(r==n && c==m) return level;
        vis[r][c] = 1;

        for(pair<int,int>p : dir){
            new_r = r + p.f ; new_c = c + p.s ;
            if(is_valid(new_r, new_c)){
                cout << "Valid neighbour added to queue " << new_r << " " << new_c << "\n" ;
                q.push( { {new_r,new_c} , level+1 } );
            }
         }
        //  the neighbours are 1 level above the parent from which we got
        cout << "LEVEL OF BFS tree " << level+1 << "\n----------------------------\n\n\n\n";
    }
    return -1;
}






int main(){
    // n <- row ; m <- column
    n = 1;
    m = 2;
    int ans = bfs();
    cout << "\n\n\nMinimum steps required  :- " << ans ;
}

