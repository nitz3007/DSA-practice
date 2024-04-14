//Question: Print the following pattern for a given input n ie. no of rows
// A 
// A B 
// A B C 
// A B C D 
// A B C D E 

#include<bits/stdc++.h>
using namespace std;

void pattern14(int n) {
    for(int i=0; i<n; i++) {
        for(char ch='A'; ch<='A'+i; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    
}

int main() {
    int n;
    cin>>n;
    pattern14(n);

    return 0;
}