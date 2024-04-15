//Question: Print the following pattern for a given input n ie. no of rows
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********

#include<bits/stdc++.h>
using namespace std;

void pattern19(int n) {
    for(int i=0; i<n; i++) {
        //star
        for(int j=0; j<n-i; j++) {
            cout<<"*";
        }
        //space
        for(int j=0; j<2*i; j++) {
            cout<<" ";
        }
        //star
        for(int j=0; j<n-i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1; i<=n; i++) {
        //star
        for(int j=0; j<i; j++) {
            cout<<"*";
        }
        //space
        for(int j=0; j<2*(n-i); j++) {
            cout<<" ";
        }
        //star
        for(int j=0; j<i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    pattern19(n);

    return 0;
}