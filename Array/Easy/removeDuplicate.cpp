// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

// Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:
// - Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
// - Return k.

#include <bits/stdc++.h>
using namespace std;

//Brute force solution
//TC: O(NlogN + N)
//SC: O(N)
int unique(vector<int> &arr) {
    set<int> st;
    for(int i=0; i<arr.size(); i++) {
        st.insert(arr[i]);
    }
    int index = 0;
    for(auto it: st) {
        arr[index] = it;
        index++;
    }
    return index;
}

//Optimal Solution
//TC: O(N)
//SC: O(1)
int uniqueOP(vector<int> &arr) {
    int i = 0;
    for(int j=1; j<arr.size(); j++) {
        if(arr[j] != arr[i]) {
            arr[i+1] = arr[j];
            i += 1;
        }
    }
    return i+1;
}

int main() {
	vector<int> v = {1,1,1,2,2,3,4,4,5,5,5};
	cout<<uniqueOP(v)<<endl;
	
	for(auto it: v) {
	    cout<<it<<" ";
	}
	return 0;
}