#include <bits/stdc++.h>
using namespace std;

void recurciveInsertionSort(int arr[], int N, int i) {
    if(i==N) return;
    
    int j=i;
    while(arr[j]>0 && arr[j]<arr[j-1]) {
        swap(arr[j], arr[j-1]);
        j--;
    }
    
    recurciveInsertionSort(arr, N, i+1);
}

int main() {
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++) {
	    cin>>arr[i];
	}
	recurciveInsertionSort(arr, n,1);
	
	for(int i=0; i<n; i++) {
	    cout<<arr[i]<<" ";
	}
	
	return 0;
}

//TC: O(N^2)
//Best Case: O(N)