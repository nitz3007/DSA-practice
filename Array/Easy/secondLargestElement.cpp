#include <bits/stdc++.h>
using namespace std;


//Better solution
//TC: O(2N)
// int secondlargestEl(vector<int> &arr) {
//     int largest = arr[0];
//     for(int i=1; i<arr.size(); i++) {
//         if(arr[i] > largest) {
//             largest = arr[i];
//         }
//     }
    
//     int sLargest = -1;
//     for(int j=0; j<arr.size(); j++) {
//         if(arr[j] > sLargest && arr[j] != largest) {
//             sLargest = arr[j];
//         }
//     }
//     return sLargest;
// }


//Optimal solution
//TC: O(N)
int secondlargestEl(vector<int> &arr) {
    int largest = arr[0];
    int sLargest = -1;
    for(int i=0; i<arr.size(); i++) {
        if(arr[i] > largest) {
            sLargest = largest;
            largest = arr[i];
        } else if(arr[i] < largest && arr[i] > sLargest) {
            sLargest = arr[i];
        }
    }
    return sLargest;
}

int main() {
    vector<int> v = {10, 5, 10};
    cout<<secondlargestEl(v);

	return 0;
}