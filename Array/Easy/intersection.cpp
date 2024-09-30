//Find intersection of two sorted arrays

#include <bits/stdc++.h>
using namespace std;

//Brute Force
//TC: O(n1 * n2)
//SC: O(n2)
vector<int> findIntersection(vector<int> &A, vector<int> &B, int n1, int n2){
    vector<int> visited(n2);
    vector<int> res;
    for(int i=0; i<n1; i++) {
        for(int j=0; j<n2; j++) {
            if(A[i] == B[j] && visited[j] == 0) {
                res.push_back(A[i]);
                visited[j] = 1;
                break;
            }
            if(B[j] > A[i]){
                break;
            }
        }
    }
    
    return res;
}

//Optimal Solution
//TC: O(n1+n2) => worst case
//SC: O(n1+n2) => worst case
vector<int> findIntersection_OP(vector<int> &A, vector<int> &B, int n1, int n2){
    int i=0; int j=0;
    vector<int> ans;
    while(i<n1 && j<n2) {
        if(A[i] < B[j]){
            i++;
        } else if(B[j] < A[i]){
            j++;
        } else {
            ans.push_back(A[i]);
            i++;
            j++;
        }
    }
    return ans;
}

int main() {
	vector<int> v1 = {1,2,2,3,4,5,6};
	vector<int> v2 = {2,3,3,4,5,6,6,7};
	
	vector<int> res = findIntersection(v1, v2, v1.size(), v2.size());
	for(auto it: res) {
	    cout<<it<<" ";
	}
	return 0;
}