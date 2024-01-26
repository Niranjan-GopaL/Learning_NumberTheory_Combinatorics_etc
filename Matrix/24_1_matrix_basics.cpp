#include <bits/stdc++.h>
using namespace std;

typedef long long     ll ;      
typedef vector<int>    vi ;
typedef pair<int,int> pi ;

#define pb      push_back
#define mp      make_pair
#define f       first
#define s       second
#define len(A)  sizeof(A) / sizeof(A[0])

template <typename T> const T& max(const T& pA, const T& pB, const T& pC) { 
    return max(pA, max(pB, pC)); 
}



// invert array and vector { since same logic; but to see how we implement it; }

vi rotate_by_90(vector<vector<int>>* v){
    
}


/*
  [ [- - - -  ]
    [- - - -  ]
    [- - - -  ] ]


*/
void spiralTraversal(vector<vector<int>>& matrix) {
    int top = 0, bottom = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;

    while (top <= bottom && left <= right) {
        // Traverse top row
        for (int i = left; i <= right; ++i) cout << matrix[top][i] << " ";
        top++;

        // Traverse right column
        for (int i = top; i <= bottom; ++i) cout << matrix[i][right] << " ";
        right--;

        // Traverse bottom row
        if (top <= bottom) {
            for (int i = right; i >= left; --i) cout << matrix[bottom][i] << " ";
            bottom--;
        }

        // Traverse left column
        if (left <= right) {
            for (int i = bottom; i >= top; --i) cout << matrix[i][left] << " ";
            left++;
        }
    }
}



int main(){
    vector<vector<int>> matrix = {
        { 1, 2 , 3,  4 },
        { 5, 6 , 7,  8 },
        { 9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    spiralTraversal(matrix);
    return 0;
}