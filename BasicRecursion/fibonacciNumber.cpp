//Given a number N, print the Nth fibonacci number. (0 based index)

#include <bits/stdc++.h>
using namespace std;

int fibonacciNumber(int N) {
    if(N <= 1)
        return N;
    return fibonacciNumber(N-1) + fibonacciNumber(N-2);
}
int main() {
	int N;
	cin>>N;
	cout<<fibonacciNumber(N);
	return 0;
}