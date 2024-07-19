#include <bits/stdc++.h>
using namespace std;

void fibonacciSeries(int N) {
    if(N == 0) {
        cout<<0;
    } else if(N == 1) {
        cout<<0<<" "<<1;
    } else {
        int fib[N+1];
        fib[0] = 0;
        fib[1] = 1;
        for(int i=2; i<=N; i++) {
            fib[i] = fib[i-1] + fib[i-2];
            
        }
        for(int i=0; i<=N; i++) {
            cout<<fib[i]<<" ";
        }
    }
}

//space optimised approach
void fibonacciSeries2(int n) {
    int last = 1;
    int secondLast = 0;
    int cur;
    cout<<secondLast<<" "<<last<<" ";
    for(int i=2; i<=n; i++){
        cur=last + secondLast;
        secondLast = last;
        last= cur;
        cout<<cur<<" ";
    }
}
 void fibonacciSeriesR(int secondLast, int last, int N) {
     if(N<=1) {
         return;
     }
     cout<<secondLast + last<<" ";
     fibonacciSeriesR(last, secondLast + last, N-1);
 }
int main() {
	int N;
	cin>>N;
	if(N==0) {
	    cout<<0;
	} else if(N==1){
	    cout<<0<<" "<<1;
	} else {
	    cout<<0<<" "<<1<<" ";
	    fibonacciSeriesR(0,1,N);
	}
    
	return 0;
}