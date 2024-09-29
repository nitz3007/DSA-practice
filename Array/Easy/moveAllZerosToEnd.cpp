//Move all the zeros to the end of teh array
#include <bits/stdc++.h>
using namespace std;

//brute force solution
//TC: O(2N)
//SC: O(x)
void moveZeros(vector<int> &arr, int n) {
    vector<int> temp;
    for(int i=0; i<n; i++) {
        if(arr[i] != 0) {
            temp.push_back(arr[i]);
        }
    }
     int nz = temp.size();
     
    for(int i=0; i<nz; i++) {
        arr[i] = temp[i];
    }
    for(int i=nz; i<n; i++) {
        arr[i] = 0;
    }
}

//Optimal Solution
//TC: O(N)
//SC: O(1)
void moveZeros_OP(vector<int> &arr, int n) {
    int j = -1;
    for(int i=0; i<n; i++) {
        if(arr[i]==0){
            j = i;
            break;
        }
    }
    
    if(j>=0){
        for(int i=j+1; i<n; i++){
            if(arr[i] != 0){
                swap(arr[i], arr[j]);
                j++;
            }
        }
    }
}

int main() {
	vector<int> v = {1,4,5,0.6,3,0,0,9};
	moveZeros(v, v.size());
	
	for(auto it: v) {
	    cout<<it<<" ";
	}
	return 0;
}