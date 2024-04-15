//Question: Print the following pattern for a given input n ie. no of rows
// E
// DE
// CDE
// BCDE
// ABCDE

#include<bits/stdc++.h>
using namespace std;

void pattern18(int n) {
    for(int i=0; i<n; i++) {
        char ch = 'A' + (n-i-1);
        for(int j=0; j<=i; j++) {
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    pattern18(n);

    return 0;
}