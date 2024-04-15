//Question: Print the following pattern for a given input n ie. no of rows
//     A    
//    ABA   
//   ABCBA  
//  ABCDCBA 
// ABCDEDCBA

#include<bits/stdc++.h>
using namespace std;

void pattern17(int n) {
    for(int i=0; i<n; i++) {
        //space
        for(int j=0; j<n-i-1; j++) {
            cout<<" ";
        }
        
        //alphabet
        char ch='A';
        for(int j=0; j<2*i+1; j++) {
            cout<<ch;
            if(j<i) ch++;
            else ch--;
        }
        
        //space
        for(int j=0; j<n-i-1; j++) {
            cout<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    pattern17(n);

    return 0;
}