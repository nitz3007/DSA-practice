// Question: Print the following pattern for a given input number n:
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

#include<bits/stdc++.h>
using namespace std;

void printPattern6(int n) {
    for(int i=0; i<n; i++) {
        for(int j=1; j<=n-i; j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    printPattern6(n);
    
    return 0;
}