#include <bits/stdc++.h>
using namespace std;


void printVector(const vector<int>& vec) {
    for (int elem : vec) 
        cout << elem << " ";
    cout << endl;
}

// g++ sort_0_1_2.cpp && ./a.out   <--- works wonders 


// same principle as in sort_0_1_2.cpp
int main() {

    vector<int> myVector = { 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 1};
    printVector(myVector);

    int r = myVector.size() - 1 , l = 0 ;

    while(l < r){
        while (myVector[r] && r>l ) r-- ;
        while (!myVector[l] && l<r) l++ ;
        swap(myVector[l],myVector[r]);
        printVector(myVector);
        r--;l++;
    }

        printVector(myVector);
        return 0;
}