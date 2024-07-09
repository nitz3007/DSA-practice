#include <bits/stdc++.h>
using namespace std;

void printReverseNum(int i) {
    if(i<1) {
        return;
    }
    cout<<i<<" ";
    printReverseNum(i-1);
}

int main() {
    int N;
	cin>>N;
	printReverseNum(N);
	return 0;
}