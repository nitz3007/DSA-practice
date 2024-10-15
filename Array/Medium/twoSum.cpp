//Variant1: Find the indices of a pair of elements whose sum is equal to K(given).
//Variant2: Return Yes if a pair of elements whose sum is equal to K(given) existes. Else return NO.

#include <bits/stdc++.h>
using namespace std;


//Brute Force
//TC: O(n^2)
vector<int> twoSum(vector<int> &arr, int N, int target) {
    vector<int> pr;
    for(int i=0; i<N; i++) {
        for(int j=i+1; j<N; j++) {
            if(arr[i] + arr[j] == target) {
                pr.push_back(i);
                pr.push_back(j);
                break;
            }
        }
    }
    return pr;
}

//Better Solution- Hashing [Optimal if we need to retur the indices]
//TC: O(Nlog(N))
//SC: O(N)
vector<int> twoSum_hash(vector<int>& nums, int N, int target) {
    vector<int> pr;
    map<int,int> hashMap;
    for(int i=0; i<nums.size(); i++) {
        int lookup = target-nums[i];
        if(hashMap.find(lookup) != hashMap.end()) {
            pr.push_back(i);
            pr.push_back(hashMap[lookup]);
            break;
        }
        hashMap[nums[i]] = i;
    }
    return pr;
}

//Optimal Solution - 2 pointer [For returning only yes or no]
//TC: O(N) + O(NlogN)
//SC: O(1)
string twoSum_2pointer(vector<int> &arr, int N, int target) {
    int left=0, right=N-1;
    sort(arr.begin(), arr.end());
    while(left<right){
        if(arr[left] + arr[right] == target) {
            return "YES";
        }else if(arr[left] + arr[right] < target) {
            left++;
        } else{
            right--;
        }
    }
    return "NO";
}



int main() {
	vector<int> v = {2,6,5,8,11};
	int target = 14;
// 	cout<<twoSum_2pointer(v, v.size(), target)<<endl;
	vector<int> result = twoSum_hash(v, v.size(), target);
	for(auto it:result) {
	    cout<<it<<endl;
	}
	return 0;
}