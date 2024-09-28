#include <bits/stdc++.h>
using namespace std;

//Brute Force Solution:
//TC: O(d) + O(N-d) + O(d) = O(N+d)
//SC: O(d)
void leftRotateByD(vector<int> &arr, int d, int N) {
    d = d%N;
    
    //creating temp array for 1st d elements
    vector<int> temp;
    for(int i=0; i<d; i++) {
        temp.push_back(arr[i]);
    }
    
    //shifting
    for(int i=d; i<N; i++) {
        arr[i-d] = arr[i];
    }
    
    //inserting temp at the end
    for(int i=N-d; i<N; i++) {
        arr[i] = temp[i-(N-d)];
    }
    
}

//Optimal Solution
//TC: O(d) + O(N-d) + O(N) = O(2N)
//SC: O(1)
void leftRotateByD_OP(vector<int> &arr, int d, int N) {
    d = d%N;
    reverse(arr.begin(), arr.begin()+d);
    reverse(arr.begin()+d, arr.begin()+N);
    reverse(arr.begin(), arr.begin()+N);
}

int main() {
    int d;
    cin>>d;
	vector<int> v = {1,2,3,4,5,6,7};
	leftRotateByD_OP(v, d, v.size());
	
	for(auto it: v){
	    cout<<it<<" ";
	}
	
	return 0;
}