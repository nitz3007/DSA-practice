//check if an array is sorted in ascending order. There can be duplicate elements.

#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> &arr) {
    bool sorted = true;
    for(int i=0; i<arr.size()-1; i++) {
        if(arr[i]>arr[i+1]) {
            sorted= false;
            break;
        }
    }
    return sorted;
}

int main() {
	vector <int> v = {1,2,2,5,7,6,9,101};
	cout<<isSorted(v)<<endl;
	return 0;
}