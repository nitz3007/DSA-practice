#include <bits/stdc++.h>
using namespace std;

bool checkPrimeNumber(int N) {
    for(int i=2; i*i<=N; i++) {
        if(N%i ==0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cin>>N;
    cout<<checkPrimeNumber(N);

	return 0;
}