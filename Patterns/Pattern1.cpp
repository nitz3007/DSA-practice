// Question: Print the following pattern for a given input number n:
// * * * *
// * * * *
// * * * *
// * * * *

#include <bits/stdc++.h>
using namespace std;

void printPattern1(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    printPattern1(n);

    return 0;
}