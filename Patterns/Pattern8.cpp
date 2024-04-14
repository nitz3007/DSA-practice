//Question: Print the following pattern for a given input n ie. no of rows
// *******
//  *****
//   ***
//    *

#include<bits/stdc++.h>
using namespace std;

void printPattern8(int n) {
    for(int i=0; i<n; i++) {
        //space
        for(int j=0; j<i; j++) {
            cout<<" ";
        }
        //star
        for(int j=0; j<2*(n-i)-1; j++) {
            cout<<"*";
        }
        //space
        for(int j=0; j<i; j++) {
            cout<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    printPattern8(n);

    return 0;
}