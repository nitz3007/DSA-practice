// Question: Print the following pattern for a given input number n:
// 1
// 1 2
// 1 2 3
// 1 2 3 4

#include <bits/stdc++.h>
using namespace std;

void printPattern3(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    printPattern3(n);
    
    return 0;
}