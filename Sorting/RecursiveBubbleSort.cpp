#include <bits/stdc++.h>
using namespace std;

//Recursive Bubble Sort
void bubbleSort(int arr[], int N) {
    if(N<=1) {
        return;
    }
    for(int j=0; j<N-1; j++) {
        if(arr[j] > arr[j+1]) {
            swap(arr[j], arr[j+1]);
        }
    }
    bubbleSort(arr, N-1);
}

int main() {
    int N;
    cin>>N;
    
    int arr[N];
    for(int i=0; i<N; i++) {
        cin>>arr[i];
    }

    bubbleSort(arr, N);
    
     for(int i=0; i<N; i++) {
        cout<<arr[i]<<" ";
    }
    
	return 0;
}

// TC: O(N^2)