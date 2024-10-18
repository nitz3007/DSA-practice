//Given an integer array nums, find the subarray with the largest sum, and return its sum.

#include <bits/stdc++.h>
using namespace std;

//Brute force
//TC: O(N^2)
//SC: O(1)
int maxsubArr(vector<int> &arr) {
    int maxSum = 0;
    for(int i=0; i<arr.size(); i++) {
        int sum =0;
        for(int j=i; j<arr.size(); j++) {
            sum += arr[j];
            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;
}

//Optimal Solution: Kadane's Algorithm
//TC: O(N)
//SC: O(1)
int maxSubArray_Kadane(vector<int>& nums) {
    int sum =0;
    int maxSum = INT_MIN;
    for(int i=0; i<nums.size(); i++) {
        if(sum < 0) {
            sum = 0;
        }
        sum += nums[i];
        maxSum = max(sum, maxSum);
    }
    return maxSum;
}

int main() {
	vector<int> v= {-2,1,-3,4,-1,2,1,-5,4};
	cout<<maxsubArr(v);
	return 0;
}