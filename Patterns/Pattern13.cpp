//Question: Print the following pattern for a given input n ie. no of rows
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 

#include<bits/stdc++.h>
using namespace std;

void pattern13(int n) {
    int count=1;
    for(int i=1; i<=n; i++) {
        for(int j=0; j<i; j++) {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    pattern13(n);

    return 0;
}