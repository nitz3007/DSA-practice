//Question: Print the following pattern for a given input n ie. no of rows
// A B C D E 
// A B C D 
// A B C 
// A B 
// A 

#include<bits/stdc++.h>
using namespace std;

void pattern15(int n) {
    for(int i=1; i<=n; i++) {
        for(char ch='A'; ch<='A'+n-i; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    pattern15(n);

    return 0;
}