#include <bits/stdc++.h>
using namespace std;

void printNum(int i, int N) {
    if(i>N) return;
    cout<<i<<" ";
    printNum(i+1, N);
}

int main() {
    int n;
    cin>>n;
    printNum(1,n);
    return 0;
}