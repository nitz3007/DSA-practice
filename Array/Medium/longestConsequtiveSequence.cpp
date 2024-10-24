#include <bits/stdc++.h>
using namespace std;

bool linearSearch(vector<int> &arr, int num) {
    for(int i=0; i<arr.size(); i++) {
        if(arr[i] == num)
            return true;
    }
    return false;
}

//TC: O(N^3)
//SC: O(1)
int longestConsequtiveSeq(vector<int> &arr) {
    int longest = 0;
    int count =0;
    for(int i=0; i<arr.size(); i++) {
        int x = arr[i];
        count = 1;
        while(linearSearch(arr, x+1) == true) {
            x += 1;
            count +=1;
        }
        longest = max(longest, count);
    }
    return count;
}

//Better Solution - sorting
//TC: O(NlogN) + O(N)
//SC: O(1)
int longestSeq_Better(vector<int> & arr) {
    int longest =0;
    int cnt = 0;
    int ls = INT_MIN;
    sort(arr.begin(), arr.end());
    
    for(int i=0; i<arr.size(); i++) {
        if(arr[i]-1 == ls) {
            cnt++;
            ls = arr[i];
        } else if(arr[i] != ls) {
            cnt = 1;
            ls= arr[i];
        }
        longest = max(longest, cnt);
    }
    return longest;
}

//Optimal Solution
//TC: O(3N)
//SC: O(1)
int longestConsecutive(vector<int>& nums) {
    int n = nums.size();
    if(n == 0) return 0;
    int longest = 1;
    unordered_set<int> st;
    for(int i=0; i<n; i++) {
        st.insert(nums[i]);
    }

    for(auto it: st) {
        if(st.find(it-1) == st.end()) {
            int cnt =1;
            int x = it;
            while(st.find(x+1) != st.end()) {
                x = x+1;
                cnt++;
            }
            longest = max(longest, cnt);
        }
    }

    return longest;
}

int main() {
    vector<int> v = {102,4,100,2,101,2,3,1,1};
    cout<<longestConsequtiveSeq(v);
	return 0;
}