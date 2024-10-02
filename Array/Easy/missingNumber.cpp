#include <bits/stdc++.h>
using namespace std;

//Brute force
//TC: O(N^2)
//SC: O(1)
int findMissing(vector<int> &arr, int N) {
    for(int i=1; i<=N; i++) {
        int flag = 0;
        for(int j=0; j<N-1; j++) {
            if(arr[j] == i) {
                flag = 1;
                break;
            }
        }
        if(flag == 0) {
            return i;
        }
    }
}

//Better - Hashing
//TC: O(N) + O(N) = O(2N)
//SC: O(N)
int findMissing_Hash(vector<int> &arr, int N) {
    vector<int> hash(N+1);
    //register occurance of elements in hash array
    for(int i=0; i<N-1; i++) {
        hash[arr[i]]++;
    }
    //check which index is having 0 value, that will be the missing number
    for(int i=1; i<=N; i++) {
        if(hash[i] == 0){
            return i;
        }
    }
}

//Optimal Solution
//TC:O(N)
//SC:O(1)

//Sum
int findMissing_sum(vector<int> &arr, int N) {
    int sumN = (N*(N+1))/2;
    int sumArr = 0;
    for(int i=0; i<N-1; i++) {
        sumArr += arr[i];
    }
    return sumN - sumArr;
}

//XOR
int findMissing_xor(vector<int> &arr, int N) {
    int xor1 = 0;
    int xor2 = 0;
    
    for(int i=0; i<N-1; i++) {
        xor1 = xor1 ^ (i+1);
        xor2 = xor2 ^ arr[i];
    }
    xor1 = xor1 ^ N;
    return xor1 ^ xor2;
}

int main() {
	vector<int> arr = {1,2,4,5,6};
	cout<<findMissing(arr, arr.size()+1);
	return 0;
}