//sum of 1st N numbers where N is given.

#include <bits/stdc++.h>
using namespace std;

int sumOfN(int i, int N, int sum) {
    if(i>N) return sum;
    sum += i;
    i+= 1;
    sumOfN(i, N, sum);
}

int main() {
	int n;
	cin>>n;
	cout<<sumOfN(1,n,0);
}