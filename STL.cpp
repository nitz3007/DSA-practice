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

int main() {
    explainPairs();
    return 0;
}