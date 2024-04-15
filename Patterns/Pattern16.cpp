//Question: Print the following pattern for a given input n ie. no of rows
// A
// BB
// CCC
// DDDD
// EEEEE

#include<bits/stdc++.h>
using namespace std;

void pattern16(int n) {
    for(int i=0; i<n; i++) {
        char ch= 'A'+i;
        for(int j=0; j<=i; j++) {  
            cout<<ch;
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    pattern16(n);

    return 0;
}