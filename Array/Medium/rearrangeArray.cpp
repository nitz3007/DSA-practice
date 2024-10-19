// You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

// You should return the array of nums such that the the array follows the given conditions:

// Every consecutive pair of integers have opposite signs.
// For all integers with the same sign, the order in which they were present in nums is preserved.
// The rearranged array begins with a positive integer.
// Return the modified array after rearranging the elements to satisfy the aforementioned conditions.

#include <bits/stdc++.h>
using namespace std;


//BruteForce
//TC: O(N) + O(N/2)
//SC: O(N)
vector<int> rearrangeArray(vector<int>& nums) {
    int N = nums.size();
    vector<int> pos;
    vector<int> neg;
    for(int i=0; i<N; i++) {
        if(nums[i] > 0) {
            pos.push_back(nums[i]);
        } else {
            neg.push_back(nums[i]);
        }
    }
    for(int i=0; i<N/2; i++) {
        nums[2*i] = pos[i];
        nums[2*i + 1] = neg[i];
    }
    return nums;
}


//Optimal Solution
//TC: O(N)
//SC: O(N)
vector<int> rearrangeArray_OP(vector<int>& nums) {
    int N = nums.size();
    int p = 0, n=1;
    vector<int> ans(N);
    for(int i=0; i<N; i++) {
        if(nums[i] > 0) {
            ans[p] = nums[i];
            p += 2; 
        } else if(nums[i] < 0) {
            ans[n] = nums[i];
            n += 2;
        }
    }
    return ans;
}
    
int main() {
	vector<int> v = {2,3,-1,-5,4,-7};
	vector<int> ans = rearrangeArray_OP(v);
	for(auto it: ans) {
	    cout<<it<<" ";
	}
	return 0;
}