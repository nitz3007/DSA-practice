//Given an array of size N. Find the highest and lowest frequency element.

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
    unordered_map<int,int> mp;
    for(int i=0; i<N; i++) {
        mp[arr[i]] += 1;
    }
    
    int max=arr[0];
    int min=arr[0];
    for(auto it: mp) {
        if(it.second > mp[max]) {
            max = it.first;
        }
        if(it.second < mp[min]) {
            min = it.first;
        }
    }
    cout<<"minimum frequency:"<<min<<endl;
    cout<<"maximum frequency:"<<max;
    
	return 0;
}