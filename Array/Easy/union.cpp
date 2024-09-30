//Find union of two sorted arrays

#include <bits/stdc++.h>
using namespace std;


//Brute Force
//TC: O(n1 logn) + O(n2 log n) + O(n1+n2)
//SC: O(n1+n2) + O(n1+n2)
vector<int> findUnion(vector<int> a1, vector<int> a2) {
    int n1 = a1.size();
    int n2 = a2.size();
    set<int> st;
    
    for(int i=0; i<n1; i++) {
        st.insert(a1[i]);
    }
    for(int j=0; j<n2; j++) {
        st.insert(a2[j]);
    }
    vector<int> un;
    for(auto it: st) {
        un.push_back(it);
    }
    
    return un;
}


//Optimal - 2 pointer approach:
//TC: O(n+m)
//SC: O(n+m)
vector<int> findUnion_OP(int arr1[], int arr2[], int n, int m)
{
    int i=0;
    int j=0;
    vector<int> un;
    while(i<n && j<m){
        if(arr1[i] <= arr2[j]) {
            if(un.size() == 0 || un.back() != arr1[i]) {
                un.push_back(arr1[i]);
            }
            i++;
        } else {
            if(un.size() == 0 || un.back() != arr2[j]) {
                un.push_back(arr2[j]);
            }
            j++;
        }
    }
    
    while(i<n) {
        if(un.size() == 0 || un.back() != arr1[i]) {
            un.push_back(arr1[i]);
        }
        i++;
    }
    
    while(j<m) {
        if(un.size() == 0 || un.back() != arr2[j]) {
            un.push_back(arr2[j]);
        }
        j++;
    }
    return un;
}

int main() {
	vector<int> v1 = {1,2,2,3,5};
	vector<int> v2 = {2,3,3,4,5,6,6};
	
	vector<int> u = findUnion(v1, v2);
	for(auto it:u) {
	    cout<<it<<" ";
	}
	
	return 0;
}