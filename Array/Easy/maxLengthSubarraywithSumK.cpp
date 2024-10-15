//Find the length of longest subarray whose sum is equal to K.


#include <bits/stdc++.h>
using namespace std;

//Brute Force
//TC: O(2N)
//SC: O(1)
int findMaxArray_brute(vector<int> &arr, int N, int K) {
    int maxLen=0;
    for(int i=0; i<N; i++) {
        int sum = 0;
        for(int j=i; j<N; j++) {
            sum += arr[j];
            if(sum == K) {
                maxLen = max(maxLen, j-i+1);
            }
        }
    }
    return maxLen;
}

//Better Solution: Hashing - for only positive elements
//Optimal Solution for (positive, negative & zero elements)
//TC: O(NlogN)
//SC: O(N)
int findMaxArray_hashing(vector<int> &arr, int N, int K) {
    map<int,int> hashMap;
    int maxLen = 0;
    int sum = 0;
    for(int i=0; i<N; i++) {
        sum += arr[i];
        if(sum == K) {
            maxLen = max(maxLen, i+1);
        }
        int rem = sum - K;
        if(hashMap.find(rem) != hashMap.end()) {
            maxLen = max(maxLen, (i - hashMap[rem]));
        }
        if(hashMap.find(sum) == hashMap.end()) {
            hashMap[sum] = i;
        }
        
    }
    return maxLen;
}


//Optimal- only for positive elements
//TC: O(2N)
//SC: O(1)
int findMaxArray(vector<int> &arr, int N, int K) {
    int maxLen = 0;
    int sum=0;
    int i=0;
    int j=0;
    while(j<N) {
        sum += arr[j];
        
        if(sum == K) {
            maxLen = max(maxLen, j-i + 1);
        }
        while(sum > K) {
            sum -= arr[i];
            i++;
        }
        j++;
    }
    return maxLen;
}

int main() {
	vector<int> v = {1,2,3,1,1,1,1,3,3};
	int K = 6;
	cout<<findMaxArray_hashing(v, v.size(), K);
	return 0;
}