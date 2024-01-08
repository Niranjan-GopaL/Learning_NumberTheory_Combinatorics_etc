#include <bits/stdc++.h>
using namespace std;


void printVector(const vector<int>& vec) {
    for (int elem : vec) 
        cout << elem << " ";
    cout << endl;
}

// 3 way partitioning algorithm (to solve this exact problem - sorting 012 string )
void sort_0_1_2_func(vector<int>& nums) {
        // put all the 0s <= low ;
        // put all the 2s >= high ;

        int low = 0, mid = 0, high = nums.size()-1;
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                low++;mid++;
            }
            else if(nums[mid] == 1) mid++;
            else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }



int main() {
        vector<int> nums = { 2, 2, 2, 0, 1, 1, 0, 0, 2, 2, 2, 2, 0, 0, 1, 0, 1};
        // vector<int> nums = { 1, 0};

        printVector(nums);
        sort_0_1_2_func(nums);
        printVector(nums);
        return 0;
}