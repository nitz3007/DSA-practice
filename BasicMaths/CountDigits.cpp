#include<bits/stdc++.h>
using namespace std;

int countDigits(int N) {
    int cnt = 0;
    while(N>0) {
        cnt++;
        N = N/10;
    }
    return cnt;
}

int countDigits2(int N) {
    int cnt = (int)(log10(N) + 1);
    return cnt;
}

int main() {
	int N;
	cin>>N;
	cout<<countDigits2(N);
	return 0;
}

//Time Complexity - O(log10(N))