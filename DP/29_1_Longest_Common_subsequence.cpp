#include <iostream>
#include <random>
using namespace std;

#define n 10 
#define m 10 


// X ----> len = m
// Y ----> len = n
int LCS(string x, string y){
    // lcs[i][j]  ----> gives the lcs of x[0...i-1] y[0...j-1]
    int lcs[m+1][n+1];

    for(int i=0; i<=m; i++){
        for(int j=0; j<=n; j++){
            if(i==0 || j==0) lcs[i][j] = 0;

            else if ( x[i-1] == y[j-1] ) lcs[i][j] = lcs[i-1][j-1] + 1 ;

            else lcs[i][j] = max( lcs[i-1][j], lcs[i][j-1] ) ;
        }
    }

    return  lcs[m][n] ;
}





int main(){
    string charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, charset.length() - 1);   

    string random_string; random_string.reserve(n);
    for (int i = 0; i < n; ++i)  random_string += charset[ dis(gen) ];

    cout << random_string << "\n";
    // cout << random_string ;

}