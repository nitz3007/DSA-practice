//find the largest element in a given array

#include <bits/stdc++.h>
using namespace std;

int largestEl(vector<int> &arr) {
        int largest = arr[0];
        for(int i=1; i<arr.size(); i++) {
            if(arr[i] > largest) {
                largest = arr[i];
            }
        }
        return largest;
    }

int main() {
    vector<int> v = {2,78,34,90,125,4};
    cout<<largestEl(v);

	return 0;
}

//TC: O(N)