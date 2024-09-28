// Rotate the given array to left by one place
// eg, I/p: {1,2,3,4,5}
// O/p: {2,3,4,5,1}

#include <bits/stdc++.h>
using namespace std;

void leftRotateOne(vector<int> &arr, int N) {
    int temp = arr[0];
    for(int i=1; i< N; i++) {
        arr[i-1] = arr[i];
    }
    arr[N-1] = temp;
}

int main() {
	vector<int> v = {1,2,3,4,5};
	leftRotateOne(v, v.size());
	
	for(auto it: v){
	    cout<<it<<" ";
	}
	
	return 0;
}

//TC: O(N)
//SC: O(1)