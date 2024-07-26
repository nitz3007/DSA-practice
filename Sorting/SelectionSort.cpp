#include <bits/stdc++.h>
using namespace std;

//In selection sort, we select the minimum element from the unsorted array and swap it at the start element of the unsorted array.
// With each step the array starts getting sorted from the starting of the array.
void selectionSort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        int min=i;
        for(int j=i; j<n; j++) {
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    } 
    selectionSort(arr, n);
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
