//sum of 1st N numbers where N is given.

#include <bits/stdc++.h>
using namespace std;

int sumOfN(int i, int N, int sum) {
    if(i>N) return sum;
    sum += i;
    i+= 1;
    sumOfN(i, N, sum);
}

int sumOfN2(int i) {
    if(i==1) return 1;
    return i + sumOfN(i-1);
}

int main() {
	int n;
	cin>>n;
	cout<<sumOfN(1,n,0);
}