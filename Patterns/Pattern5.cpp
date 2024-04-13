// Question: Print the following pattern for a given input number n:
// * * * *
// * * *
// * * 
// * 

#include <bits/stdc++.h>
using namespace std;

void printPattern5(int n) {
    for(int i=0; i<n; i++) {
        for(int j=n-i; j>=1; j--) {
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    printPattern5(n);
    
    return 0;
}