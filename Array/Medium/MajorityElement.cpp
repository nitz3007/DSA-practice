#include <bits/stdc++.h>
using namespace std;


//Better Solution
//TC: O(NlogN) + O(N)
//SC: O(N)
int majorityElement(vector<int>& nums) {
        map<int,int> hashmap;
        for(int i=0; i<nums.size(); i++) {
            hashmap[nums[i]]++;
        }
        for(auto it:hashmap){
            if(it.second > nums.size()/2) {
                return it.first;
            }
        }
        return -1;
    }

//Optimal Solution
//TC: O(2N)
//SC: O(1)
int majorityElement_OP(vector<int>& nums) {
    int el;
    int cnt = 0;
    for(int i=0; i<nums.size(); i++) {
        if(cnt == 0) {
            el = nums[i];
            cnt = 1;
        }else if(nums[i] == el) {
            cnt++;
        } else {
            cnt--;
        }
    }
    int occ = 0;
    for(int i=0; i<nums.size(); i++) {
        if(nums[i] == el) {
            occ++;
        }
    }
    if(occ > (nums.size()/2)){
        return el;
    }
    return -1;
}

int main() {
	vector <int> v = {6,5,5};
	cout<<majorityElement_OP(v)<<endl;
	return 0;
}