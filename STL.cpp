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

int main() {
    explainPairs();
    return 0;
}