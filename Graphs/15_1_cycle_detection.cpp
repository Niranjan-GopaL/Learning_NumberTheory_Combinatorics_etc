#include <bits/stdc++.h>
using namespace std;

#define ll      long long
#define pb      push_back


ll n,m,k,q;
ll u,v;
const ll arr_template_size = 1e6;


vector<ll> edges[arr_template_size];
int vis[arr_template_size];
vector<ll> color(arr_template_size, -1);
ll D[arr_template_size];
ll F[arr_template_size];
ll phi[arr_template_size];
ll clr,x ;


void print_graph(){
    for(ll i = 0; i< n; i++)
        for(ll j : edges[i])
            cout << i << " -> " << j << "\n" ;
}


int is_acyclic_dfs( ll i , ll parent){
    cout << "DFS on neighbours of the " <<  parent   << " is -> " << i << "\n";
    vis[i] = 1;
    for(ll j: edges[i]){
        cout << "neighbour " << j << " visited bit ---> " << vis[j]  << "\n"; // needs to be 0 always for graph to be acylcic
        if(j != parent){
            if (!vis[j])
             return is_acyclic_dfs(j,i) ;
            else
                return 0;
        }
    }
    return 1;
}



int is_acyclic(){
        for(ll i=0;i<n;i++){
            if(!vis[i]){
                queue<ll> q; clr = 1; q.push(i);color[i] = !clr;
                while(!q.empty()){
                    cout << "color for this level is --> " << clr  << "\n";
                    x = q.front(); q.pop();
                    cout << x  << " POPPED from FRONT of the QUEUE\t " << vis[x] << " <- value of the visted bit \n" ;

                    if(vis[x]){continue;}

                    vis[x]=1; 

                    for(ll y : edges[x]){
                        if(!vis[y]) {
               
                            cout << "initially, NEIGHBOR " << y << " has the color" << color[y] << "\n" ;
                            if( color[y] != -1 ){
                                if(color[y] != clr) return 0; 
                            }else{
                                color[y] = clr ;
                            }
                            cout << "finally, NEIGHBOR " << y << " has the color" << color[y] << "\n" ;

                            q.push(y);
                        }
                    } 
                    clr = !clr ;
                    cout << "value of toggles color" << clr << "\n\n\n\n";
        }}}
    return 1;
}


ll is_acyclic_util(ll i){
    cout << "DFS on neighbours of the " << i << "\n";
    vis[i] = 1;
    for(ll j: edges[i]){
        if(!vis[j]){
            if( !is_acyclic_util(j) ) return 0;  
        }else{
            return 0;
        }
    }
    return 1;
}


int acyclic_dfs(){
    for(ll i = 0; i < n; i++){
        if(!vis[i]){
            if(!is_acyclic_util(i))return 0;
        }
    }
    return 1;
}



/*
8
7
1 2
1 3
1 4
2 5
2 6
2 7
3 4
*/


int main(){
    cin >>n ; cin >> m;
    while(m--){
        cin >> u >> v;
        edges[u].pb(v);
        // uncomment for undirected graph
        // edges[v].pb(u); 
    }

    int ans = acyclic_dfs();
    cout << "Graph is acylic -> " << ans  ;

}
