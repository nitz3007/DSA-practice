// Question: Print the following pattern for a given input number n:
// 1
// 2 2
// 3 3 3
// 4 4 4 4

#include <bits/stdc++.h>
using namespace std;

void printPattern4(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    printPattern4(n);
    
    return 0;
}