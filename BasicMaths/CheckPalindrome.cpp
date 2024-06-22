#include<bits/stdc++.h>
using namespace std;

int checkPalindrome(int N) {
    int original = N;
    int reverse = 0;
    while(N>0) {
        int lastDigit = N%10;
        reverse = (reverse * 10) + lastDigit;
        N= N/10;
    }
    if(original == reverse) {
        return true;
    }
    return false;
}

int main() {
	int N;
	cin>>N;
	cout<<checkPalindrome(N);
	return 0;
}