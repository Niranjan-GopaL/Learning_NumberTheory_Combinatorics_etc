#include <bits/stdc++.h>
using namespace std;

#define ll long long

// UNDERSTAND THIS AFTER LEARNING DP

class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<vector<int>> answer;
        for(int i=0; i<m; i++){ vector<int > v(0,n);answer.push_back(v); }

        // optimisation 1 : remember the max for a column
        // better idea : traverse column
        // Learning idea :- On interchanging loop, you traverse COLUMN WISE

        // we need to traverse tiint the VERY LAST ELEMENT in column to make sure we get the maximum_elem
        int max_elem = 0;
        for( int j=0; j<n; j++ ){
            for (int i = 0; i < m; i++) { answer[i][j] = matrix[i][j] ; max_elem = max( max_elem, matrix[i][j] );} 
            for (int i = 0; i < m; i++) { if(answer[i][j] == -1)answer[i][j] = max_elem; }
        }
        return answer;

        

    }
};