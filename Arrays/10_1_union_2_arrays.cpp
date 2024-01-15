#include <bits/stdc++.h>
using namespace std;


void printVector(vector<int>& vec) {
    for (int elem : vec) 
        cout << elem << " ";
    cout << endl;
}


// algo is sought of like count sort
int main() {
        vector<int> a = {2, 1, 22, 11, 23, 33, 10, 122, 233, 100, 45, 55, 34, 30};
        vector<int> b = { 1, 0, 2, 2 ,22 , 13};

        printVector(a);
        printVector(b);

        // induvidual element of the array can be atmost 1e5;
        vector<int> total(1e6,0);
        vector<int> merged(a.size() + b.size(), 0);

        for (int i = 0; i < a.size(); i++) if(!total[a[i]]) total[a[i]]=1 ; 
        for (int i = 0; i < b.size(); i++) if(!total[b[i]]) total[b[i]]=1 ;
        printVector(merged);

        int j = 0;
        for(int i=0; i<1e6; i++){ if( total[i] ){ merged[j] = i; j++; } }
        printVector(merged);

        return 0;
}