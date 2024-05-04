#include<bits/stdc++.h>
using namespace std;

//Pair
void explainPairs() {
    pair<int,int> p = {1,2};
    cout<<p.first<<" "<<p.second;
    cout<<endl;
    
    pair<int, pair<int,int>> p1 = {1,{3,4}};
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second;
    cout<<endl;
    
    pair<int,int> arr[] = {{1,2}, {3,5}, {4,7}};
    cout<<arr[1].second;
}

//vector
void explainVectors() {
    vector<int> v;
    v.push_back(5);
    v.push_back(1);
    v.push_back(3);
    v.push_back(10);
    v.push_back(7);
    
    // vector<int>::iterator it = v.end();
    // it--;
    // cout<<*(it)<<" ";
    
    // for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
    //     cout<<*it<<" ";
    // }
    
    //shorter way
    // for(auto it = v.begin(); it != v.end(); it++){
    //     cout<<*it<<" ";
    // }
    
    
    
    // vector<pair<int,int>> vec;
    // vec.push_back({3,4});
    // vec.emplace_back(7,8);
    
    //deletion functions
    // v.erase(v.begin()+1);
    // v.erase(v.begin()+2, v.begin()+4);
    
    //Insert functions
    v.insert(v.begin(), 11);
    v.insert(v.begin()+2, 2, 30);
    
    vector<int> copy(2,50);
    v.insert(v.begin()+4, copy.begin(), copy.end());
    
    cout<<v.size()<<endl;
    
    v.pop_back();
    
    // v.clear();
    // cout<<v.size()<<endl;
    cout<<v.empty()<<endl;
    
    // for each loop
    for(auto it:v) {
        cout<<it<<" ";
    }
    
}

//list
void explainList() {
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(1);
    ls.emplace_front(9);
    
    for(auto it: ls){
        cout<<it<<" ";
    }
    //all ither methods are same as in vector
}

//deque
void explainDeque() {
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(3);
    dq.emplace_front(4);
    
    cout<<dq.back()<<endl;
    cout<<dq.front()<<endl;
    
    for(auto it: dq){
        cout<<it<<" ";
    }
}

//stack
void explainStack() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    
    cout<<st.top()<<endl;
    
    st.pop();
    cout<<st.top()<<endl;
}

//queue
void explainQueue() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4);
    
    q.back() +=5;
    
    cout<<q.back()<<endl;
    
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
}

//priority queue
void explainPQ() {
    priority_queue<int> pq;
    pq.push(3);
    pq.push(2);
    pq.push(8);
    pq.emplace(12);
    
    pq.pop();
    
    cout<<pq.top()<<endl;
}

//min heap priority_queue
void minHeap() {
    priority_queue<int, vector<int>, greater<int>> mpq;
    mpq.push(5);
    mpq.push(2);
    mpq.push(8);
    mpq.emplace(10);
    
    mpq.pop();
    
    cout<<mpq.top();
}

//set
void explainSet() {
    set<int> s;
    s.insert(2);
    s.insert(2); //stores only unique values
    s.insert(4);
    s.emplace(1);
    s.emplace(5);
    s.emplace(7);
    s.emplace(10);
    s.emplace(8);
    s.emplace(14);
    
    auto it1 = s.find(2); //return mem address of element 2
    auto it2 = s.find(20); //returns memory address of s.end() ie, address of mem just after the last element- since 20 is not preent in the set
    
    s.erase(4); //takes log N time
    
    int ct1 = s.count(1);
    int ct2 = s.count(20);
    cout<<ct2<<endl;
    
    auto it = s.find(8);
    s.erase(it); //takes O(1) time
    
    auto it3 = s.find(2);
    auto it4 = s.find(7);
    s.erase(it3, it4);
    
    for(auto it: s ){
        cout<<it<<" ";
    }
    
    //learn about upper_bound & lower_bound
}

//multiset - special sets where value can be repetative
//sorted but not unique
void explainMultiSet() {
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    
    ms.erase(1); //deletes all instances of 1
    
    ms.erase(ms.find(1)); //deletes only the first instance for 14
    
    cout<<ms.count(1)<<endl;
    
    for( auto it: ms) {
        cout<<it<<" ";
    }
}

//unorderedSet - stores unique values but not in sorted order
void explainUnorderedSet() {
    unordered_set<int> us;
    us.insert(5);
    us.emplace(2);
    us.insert(7);
    us.insert(2); 
    
    for( auto it: us) {
        cout<<it<<" ";
    }
    // O/p: 7 2 5
    
}

//map
void explainMap() {
    map<int,int> mp;
    mp[1] = 2;
    mp.insert({3,4});
    mp.insert({4,2});
    mp.emplace(pair<int,int>(2,5));
    
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    
    cout<<mp[2]<<endl;
    cout<<mp[7]<<endl;
}

//sort method & comparator
bool comp(pair<int,int>p1, pair<int,int>p2) {
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    
    //if second is same:
    if(p1.first > p2.first) return true;
    return false;
}
void explainSort() {
    int a[] = {9,4,7,2,66,3,1,7};
    int n= sizeof(a) / sizeof(a[0]);
    sort(a,a+n);
    
    for(auto it: a){
        cout<<it<<" ";
    }
    
    cout<<endl;
    
    pair<int,int> arr[] = {{1,2}, {2,1}, {4,1}};
    sort(arr, arr+3, comp);
    for(auto it: arr){
        cout<<it.first<<" "<<it.second<<endl;
    }
}

//__builtin_popcount, next_permutation, max_element & min_element methods:
void explainExtraMethods() {
    int n = 7;
    int cnt = __builtin_popcount(n);
    cout<<cnt<<endl; 
    
    long long num = 167234765987;
    int cnt2 = __builtin_popcountll(num);
    cout<<cnt2<<endl;
    
    string s= "123";
    do{
        cout<<s<<" ";
    }while(next_permutation(s.begin(),s.end()));
    cout<<endl;
    
    int a[] = {2,5,7,11,75,30,6};
    int max_val = *max_element(a, a+7);
    int min_val = *min_element(a, a+7);
    cout<<"Max Value: "<<max_val<<endl; 
    cout<<"Min Value: "<<min_val<<endl; 
}


int main() {
    explainPairs();
    return 0;
}