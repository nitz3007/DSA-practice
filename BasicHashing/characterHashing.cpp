//Find no. of occurance sof lower case characters in a given string:
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	
	//precalculation
	int hash[26] = {0};
	
	for(int i=0; i<s.size(); i++) {
	    hash[s[i]-'a'] += 1;
	}
	
	int q;
	cin>>q;
	while(q--){
	    char c;
	    cin>>c;
	    cout<<hash[c-'a']<<endl;
	}
	return 0;
}