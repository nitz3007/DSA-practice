#include <bits/stdc++.h>
using namespace std;


void bubbleSort(int arr[], int N) {
    for(int i=0; i<N-1; i++) {
        int didSwap = 0;
        for(int j=0; j<N-1-i; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                didSwap++;
            }
        }
        
        if(didSwap==0) {
            break;
        }
    }
   
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