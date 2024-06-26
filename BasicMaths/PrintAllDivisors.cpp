#include <bits/stdc++.h>
using namespace std;

void printDivisors(int N) {
    vector<int> v;
    for(int i=1; i*i<=N; i++) {
        if(N%i == 0) {
            v.push_back(i);
            
            if(N/i != i) {
                v.push_back(N/i);
            }
        }
    }
    sort(v.begin(),v.end());
        
    for(auto it:v) {
        cout<<it<<" ";
    }
}

int main() {
    int N;
    cin>>N;
    printDivisors(N);

	return 0;
}