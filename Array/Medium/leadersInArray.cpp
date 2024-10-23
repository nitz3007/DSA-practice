//Given an array, print all the elements which are leaders. A Leader is an element that is greater than all of the elements on its right side in the array.

//Optimal Solution
//TC: O(N)
//SC: O(1)
vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    int maxVal = arr[n-1];
    vector<int> leader;
    leader.push_back(maxVal);
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= maxVal) {
            leader.push_back(arr[i]);
            maxVal = arr[i];
        }
    }
    reverse(leader.begin(), leader.end());
    return leader;
}