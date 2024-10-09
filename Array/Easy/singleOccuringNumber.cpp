#include <bits/stdc++.h>
using namespace std;

//Brute force
//TC: O(N*N)
//SC: O(1)
int findSingleOccuringNumber(vector<int> &arr) {
    for(int i=0; i<arr.size(); i++) {
        int num = arr[i];
        int cnt =0;
        for(int j=0; j<arr.size(); j++) {
            if(arr[j] == num) {
                cnt++;
            }
        }
        if(cnt == 1) {
            return num;
        }
    }
}

//Better Solution
//Using hash array
//TC: O(3N)
//SC: O(M) , M= maximum number value in the I/P array
int findSingleOccuringNumber_hashArray(vector<int> &arr) {
    int maxEl = arr[0];
    for(int i=0; i<arr.size(); i++) {
        maxEl = max(maxEl, arr[i]);
    }
    vector<int> hash(arr.size() + 1);
    for(int i=0; i<arr.size(); i++) {
        hash[arr[i]]++;
    }
    
    for(int i=0; i<arr.size(); i++) {
        if(hash[arr[i]] == 1){
            return arr[i];
        }
    }
    
}

//Using hash map
//TC: O(Nlog(N/2+1) + (N/2+1))
//SC: O(N/2 + 1)
int findSingleOccuringNumber_hashMap(vector<int> &arr) {
    map<int, int> mp;
    for(int i=0; i<arr.size(); i++) {
        mp[arr[i]]++;
    }
    for(auto it:mp) {
        if(it.second == 1)
            return it.first;
    }
}

//Optimal Solution
//TC: O(N)
//SC: O(N)
int findSingleOccuringNumber_xor(vector<int> &arr) {
    int xorRes = 0;
    for(int i=0; i< arr.size(); i++) {
        xorRes = xorRes ^ arr[i];
    }
    return xorRes;
}

int main() {
	vector<int> v = {1,2,1,3,3,8,8,2,9};
	cout<<findSingleOccuringNumber_hashMap(v)<<endl;
	return 0;
}