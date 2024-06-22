#include <bits/stdc++.h>
using namespace std;

void printDivisors(int N) {
    vector<int> v;
    //time complexity: O(sqrt(N))
    for(int i=1; i*i<=N; i++) {
        if(N%i == 0){
            v.push_back(i);
            if(N/i != i) {
                v.push_back(N/i);
            }
        }
    }
    //time complexity: O(x * log(x)), where x = no. of divisors
    sort(v.begin(), v.end());

    //time complexity: O(x)
    for(auto it: v){
        cout<<it<<" ";
    }
}

int main() {
    
    printDivisors(36);
    return 0;
}