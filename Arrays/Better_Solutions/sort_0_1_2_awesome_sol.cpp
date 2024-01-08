#include <bits/stdc++.h>
using namespace std;


void printVector(const vector<int>& vec) {
    for (int elem : vec) 
        cout << elem << " ";
    cout << endl;
}


void sort_0_1_2_func(vector<int>& nums) {

        vector<int> freq(3,0);
        for(int i=0;i<nums.size();i++)
            freq[nums[i]]++; // couting frequency of 0,1,2 in nums

        freq[1]+=freq[0];  // freq array now has cumulative frequencies
        freq[2]+=freq[1];

        // we do this because  :-

        /*
                   last 0                last 1           last 2    
        [   000..   `0` |      1111....   `1` |   2222.... `2`]  
        In sorted array, the index of 2s and 1s and 0s can be EASILY UNDERSTOOD by cumulative freq.
        -> last 2's index = count(0) + count(1) + count(2) - 1  
        -> last 1's index = count(0) + count(1) - 1  
        -> last 0's index = count(0) - 1  

        */

        vector<int> arr(nums.size(),0);

        for(int i=nums.size()-1;i>=0;i--)
        // ALSO THIS PERFECT EXAMPLE where p-- and --p will give very different answer
        // here you have to use --freq; the array_index needs to be frq[num[i]]-1  ;
             arr[--freq[nums[i]]]=nums[i];
        // AWESOME TRICK ; implementing what we learnt above ;
        // inserting last 1s ; last 2s ; last 0s



        for(int i=0;i<nums.size();i++)
            nums[i]=arr[i];
}




int main() {
        vector<int> nums = { 2, 2, 2, 0, 1, 1, 0, 0, 2, 2, 2, 2, 0, 0, 1, 0, 1};
        // vector<int> nums = { 1, 0};

        printVector(nums);
        sort_0_1_2_func(nums);
        printVector(nums);
        return 0;
}