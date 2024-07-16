#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}

//reverse an array using for loop.
void reverseArray(int a[], int n) {
    int ans[n];
    for(int i=0; i<n; i++) {
        ans[n-1-i] = a[i];
    }
    printArr(ans, n);
}

int main() {
	int arr[] = {1,4,8,3,7};
	reverseArray(arr, 5);
	return 0;
}

//recursion with 2 pointers
void reverseArrayRec2(int l, int r, int arr[]) {
    if(l>=r) return;
    swap(arr[l], arr[r]);
    reverseArrayRec2(l+1, r-1,arr);
}

//recursion with single pointer-i
void reverseArrayRec(int i, int arr[], int n) {
    if(i >= n/2) return;
    swap(arr[i], arr[n-1-i]);
    reverseArrayRec(i+1, arr, n);
}

int main() {
	int arr[] = {1,4,8,3,7};
	int n=5;
	reverseArrayRec2(0,n-1, arr);
	printArr(arr,n);
	return 0;
}

