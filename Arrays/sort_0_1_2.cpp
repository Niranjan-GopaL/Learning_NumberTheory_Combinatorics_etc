#include <bits/stdc++.h>
using namespace std;


void printVector(const vector<int>& vec) {
    for (int elem : vec) 
        cout << elem << " ";
    cout << endl;
}


// g++ sort_0_1_2.cpp && ./a.out   <--- works wonders 

int main() {

    vector<int> myVector = { 2, 2, 2, 0, 1, 1, 0, 0, 2, 2, 2, 2, 0, 0, 1, 0, 1};
    printVector(myVector);

    int r = myVector.size() - 1 , l = 0 ;

    while(l < r){
        while (myVector[r] == 2 && r>l ) r-- ;
        while (myVector[l] != 2 && l<r) l++ ;
        swap(myVector[l],myVector[r]);
        printVector(myVector);
        r--;l++;
    }

    l = 0;

    while(l < r){
        while (myVector[r] == 1 && r>l ) r-- ;
        while (myVector[l] != 1 && l<r) l++ ;
        swap(myVector[l],myVector[r]);
        printVector(myVector);
        r--;l++;
    }

    printVector(myVector);
    return 0;
}