#include <bits/stdc++.h>
using namespace std;

//Optimal Solution
//TC: O(N)
//SC: O(1)
int maxProfit(vector<int>& prices) {
    int buy = prices[0];
    int maxProfit = 0;
    for(int i=0; i<prices.size(); i++) {
        buy = min(buy, prices[i]);
        int profit = prices[i] - buy;
        maxProfit = max(maxProfit, profit);
    }
    return maxProfit;
}
int main() {
	vector<int> v = {2,3,1,4,5,7,6};
	cout<<maxProfit(v);
	return 0;
}