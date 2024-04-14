//Question: Print the following pattern for a given input n ie. no of rows
// *
// **
// ***
// ****
// ***
// **
// *
#include<bits/stdc++.h>
using namespace std;

void pattern10(int n) {
    for(int i=1; i<= 2*n-1; i++) {
        int stars= i;
        if(i>n) {
            stars = 2*n-i;
        }
        for(int j=0; j<stars; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    pattern10(n);

    return 0;
}