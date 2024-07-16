#include <bits/stdc++.h>
using namespace std;

// int factorial(int i, int product) {
//     if(i<1) return product;
//     factorial(i-1,product*i);
// }

int factorial(int n) {
    if(n==1) return 1;
    return n * factorial(n-1);
}

int main() {
	int n;
	cin>>n;
	cout<<factorial(n);
}