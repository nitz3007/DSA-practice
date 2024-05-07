#include<bits/stdc++.h>
using namespace std;

int reverseNumber(int N) {
    int reverse = 0;
    while(N>0) {
        int lastDigit = N%10;
        reverse = (reverse * 10) + lastDigit;
        N= N/10;
    }
    return reverse;
}

int main() {
	int N;
	cin>>N;
	cout<<reverseNumber(N);
	return 0;
}