// Find the frequency of an element in a given input array using map
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>>N;
    int arr[N];
    for(int i=0; i<N; i++) {
        cin>>arr[i];
    }
    
    //pre-computation
    //use map for worst case and unordered_map for best & average case
    unordered_map<int,int> mp;
    for(int i=0; i<N; i++) {
        mp[arr[i]] += 1;
    }
    
    int q;
    cin>>q;
    while(q--) {
        int number;
        cin>>number;
        cout<<mp[number]<<endl;
    }
    
	return 0;
}