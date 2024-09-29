//Linear Search
//TC: O(N)

#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &arr, int num) {
    for(int i=0; i<arr.size(); i++) {
        if(arr[i] == num){
            return i;
        }
    }
    return -1;
}


int main() {
    vector<int> v = {2,4,4,7,9,1,5};
    int num;
    cin>>num;
    
    cout<<linearSearch(v, num);
    
	return 0;
}