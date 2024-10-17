//Sort the 0s,1s,2s in a given array.
//The dutch flag has 3 colors red-0, white-1, blue-2

#include <bits/stdc++.h>
using namespace std;

//Brute Force
//TC: O(3N)
//SC: O(N)
//You can also simply sort the array 
//TC: O(NlogN)
vector<int> sortColors(vector<int> &arr) {
    int N = arr.size();
    vector<int> temp;
    for(int i=0; i<N; i++) {
        if(arr[i] == 0) {
            temp.push_back(0);
        }
    }
    for(int i=0; i<N; i++) {
        if(arr[i] == 1) {
            temp.push_back(1);
        }
    }
    for(int i=0; i<N; i++) {
        if(arr[i] == 2) {
            temp.push_back(2);
        }
    }
    return temp;
}

//Better Solution
void sortColors_better(vector<int> &arr) {
    int zero=0, one=0, two=0;
    for(int i=0; i<arr.size(); i++) {
        if(arr[i] == 0) zero++;
        if(arr[i] == 1) one++;
        if(arr[i] == 2) two++;
    }
    int i=0;
    while(zero>0){
        arr[i] = 0;
        zero--;
        i++;
    }
    while(one > 0) {
        arr[i] = 1;
        one--;
        i++;
    }
    while(two > 0) {
        arr[i] = 2;
        two--;
        i++;
    }
}


//Optimal Solution
//TC: O(N)
//SC: O(!)
void sortColors_OP(vector<int>& nums) {
    int low = 0, mid=0, high= nums.size() -1;
    while(mid <= high) {
        if(nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        } else if(nums[mid] == 1) {
            mid++;
        } else if(nums[mid] == 2) {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main() {
	vector<int> v = {2,0,1,1,0,2,1};
	
	sortColors_OP(v);
	for(auto it:v) {
	    cout<<it<<endl;
	}
	return 0;
}