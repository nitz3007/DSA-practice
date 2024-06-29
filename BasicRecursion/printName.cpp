//Print your Name for 5 times.

#include <bits/stdc++.h>
using namespace std;
int cnt = 0;

void printName() {
    if(cnt == 5) return;

    cout<<"Niharika"<<endl;
    cnt++;
    printName();
}

//Print your Name for N times.
void printNName(int i, int n) {
    if(i>n){
        return;
    }
    cout<<"Niharika"<<endl;
    printNName(i+1, n);
}

int main() {
    int N;
    cin>>N;
    printName();
    printNName(1,N);
    return 0;
}

