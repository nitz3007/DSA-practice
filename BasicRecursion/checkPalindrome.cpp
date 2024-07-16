#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str, int l, int r) {
    if(str[l] != str[r]) return false;
    if(l >= r ) return true;
    return checkPalindrome(str, l+1, r-1);
}
int main() {
    string str;
    cin>>str;
    cout<<checkPalindrome(str, 0, str.length() - 1);
	return 0;
}