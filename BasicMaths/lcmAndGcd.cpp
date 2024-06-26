#include <bits/stdc++.h>
using namespace std;

//Time complexity: O(log(min(A,B)))
vector<long long> lcmAndGcd(long long A , long long B) {
    vector<long long> v;
    long long multiple = A*B;
    long long GCD;
    long long LCM;
    while(A>0 && B>0) {
        if(A > B) A=A%B;
        else B=B%A;
    }
    if(A==0) GCD = B;
    else GCD = A;
    
    LCM = (multiple)/GCD;
    v.push_back(LCM);
    v.push_back(GCD);
    return v;
}
int main() {
    long long N1, N2;
    cin>>N1>>N2;
    vector<long long> result = lcmAndGcd(N1, N2);
    for(auto it: result){
        cout<<it<<" ";
    }

	return 0;
}