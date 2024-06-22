#include<bits/stdc++.h>
using namespace std;

bool checkArmstrong(int N) {
    int original = N;
    int sum = 0;
    while(N>0) {
        int lastDigit = N%10;
        sum = sum + (lastDigit * lastDigit * lastDigit);
        N= N/10;
    }
    if(original == sum) {
        return true;
    }
    return false;
}

int main() {
	int N;
	cin>>N;
	cout<<checkArmstrong(N);
	return 0;
}