#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i=low;
    int j=high;
    while(i< j) {
        while(arr[i]<=pivot && i<high) {
            i++;
        }
        while(arr[j] > pivot && j>low) {
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort (vector<int> &arr, int low, int high) {
    if(low >= high) return;
    int pIndex = partition(arr, low, high);
    quickSort(arr, low, pIndex -1);
    quickSort(arr, pIndex+1, high);
}

int main() {
    // Write C++ code here
   	vector<int> v = {4,6,2,5,7,9,1,3};
	
	quickSort(v, 0, v.size()-1);
	
	for(auto it:v) {
	    cout<<it<<" ";
	}

    return 0;
}