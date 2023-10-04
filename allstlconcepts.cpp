#include <bits/stdc++.h>
using namespace std;

void explainPair() {
    pair<int, int> p1 = {1, 3};
    cout << p1.first << " " << p1.second <<endl;

    pair<int, pair<int, int>> p2 = {1, {3, 4}};
    cout << " " << p2.first << " " << p2.second.second << " " << p2.second.first << endl;

    pair<int, int> arr[] = {{1,2},{5,6},{9,10},{13,14}};
    cout<<" " <<arr[3].first;
}

void explainVector() {
    vector<int> v; //It is an container to store values like array but it is dynamic;
    v.push_back(1); //
    v.emplace_back(2);//It is similar as pushback but faster than pushback;
    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);
    vector<int> v1(5,20);
    vector<int> v2(v1);
    vector<int>::iterator it = v.begin();
    it++;
    cout<<"The value at index 2 is : "<<*(it)<<endl;
    //ways to print the vector

    for(vector<int>::iterator it = v1.begin();it != v1.end();it++) {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    for(auto it = v2.begin();it != v2.end();it++) { //auto automatically assigns to a vector iterator;
        cout<<*(it)<<" ";
    }
    //To erase an element in a vector
    v2.erase(v2.begin() + 2);
    cout<<endl;
    for(auto it = v2.begin();it != v2.end();it++) { //auto automatically assigns to a vector iterator;
        cout<<*(it)<<" ";
    }
    //TO again insert an element

    v2.insert(v2.begin()+2,20);  //you need to provide the location and the value;
    cout<<endl;
    for(auto it = v2.begin();it != v2.end();it++) { //auto automatically assigns to a vector iterator;
        cout<<*(it)<<" ";
    }
    //to copy one vector into another

    vector<int>copy (2,50);

    v2.insert(v2.begin(),copy.begin(),copy.end());
    cout<<endl;
    for(auto it = v2.begin();it != v2.end();it++) { //auto automatically assigns to a vector iterator;
        cout<<*(it)<<" ";
    } //now if you will see 50 , 50 is inserted in the vector v2 from copy vector;
    //To check the size of vector
    cout<<endl;
    cout<<"The size of vector v2 is : "<<v2.size();
    v2.pop_back(); //It takes out the last element from the back of vector;
    v1.swap(v2);//This swaps the two vector;
    v.clear();//It clears the whole vector whatever the size is;
    cout<<v.empty();//It will check if the vector is empty or not , if there is anything in the vector it will give false , else it will give true;

}


void explainList() {
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(5); //It is very cheap as compared to insert function.
    ls.emplace_front(9);
    for(auto it = ls.begin();it != ls.end();it++) {
        cout<<*(it)<<" ";
    }
}


void explainDeque() {
    //It is similar to vector and list
    deque<int> dq;
    //emplace,back,front all same operations as vector and list;
    
}

void explainStack() {
    //Stack works on last in first out;
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(5);
    st.push(8);
    st.push(9);
    st.emplace(5);
    cout<<st.top()<<endl;
    st.pop();  //To delete the element  
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    cout<<st.empty()<<endl;
    //you can also perform swap operation;
    stack<int>str1,str2;
    str1.swap(str2);
    //all operation are done in O(1);

}

void explainQueue() {
    queue<int> q;
    q.push(1);
    q.push(3);
    q.emplace(4);
    q.back() += 5;
    cout << q.back() <<endl;

    cout<< q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
}

void explainPQ() {
    priority_queue<int>pq; //max heap;
    pq.push(4);
    pq.push(2);
    pq.push(10);
    pq.emplace(20);
    cout<< pq.top() <<endl;//The largest element is on the top;
    pq.pop();
    cout<< pq.top() <<endl;//In this data structure a queue data structure is maintained.
    //If we want smallest element at the top then it will be implemented in this way;
    //minimum heap
    priority_queue<int,vector<int>,greater<int>>p;
    p.push(5);
    p.push(2);
    p.push(1);
    cout<<p.top();//push and pop happen in O(log n) and top happens in O(1);
}

void explainSet() {
    //It stores everything in the sorted order and its unique;
    set<int>st;
    st.insert(1);
    st.emplace(1);
    st.insert(3);
    st.insert(4);
    st.insert(5);
    auto it = st.find(3);//if you try to find an element which is not in the set , then it will return a iterator just after the end.
    st.erase(3);
    //auto it = st.lower_bound(3);
    //auto it = st.upper_bound(4);

}

void explainMultiset() {
    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.emplace(2);
    for(auto it = ms.begin();it != ms.end();it++) {
        cout<<*(it)<<" ";
    }
    ms.erase(ms.find(1));
    cout<<endl;
    for(auto it = ms.begin();it != ms.end();it++) {
        cout<<*(it)<<" ";
    } //It is also sorted but stores multiple occurrence;

}

void explainUS() {
    unordered_set<int>us;
    us.insert(1);
    us.insert(2);
    //everything is same as set , just it will not store in sorted order , its random.
    //the lower bound and upper bound function does not work,all operation have O(1) order;
}


void explainMap() {
    //It stores like a key value pair
    map<int,int> mpp;
    map<int,pair<int,int>> npp;
    map<pair<int,int>,int> spp;//Map stores unique keys;
    mpp[1] = 2;
    mpp.insert({3,1});
    mpp.insert({2,4});
    spp[{2,3}] = 10; // It stores value as a on basis of sorted keys;
    for(auto it: mpp) {
        cout<<it.first <<" "<<it.second<<endl;
        cout<<mpp[1]<<endl;//direct access
    }
    //O(log n)
}

void explainMultimap() {
    //same as map ,just it stores duplicate keys;
    //only mpp[key] cannot be used here;
}

void explainUM() {
    //It will have unique keys ,but it will not be sorted.
    //All the operations have O(1).
}

//Iterators and Containers is done till now;
int main() {
    explainMultimap();
    explainUM();
    explainMap();
    explainUS();
    explainMultiset();
    explainSet();
    explainPQ();
    explainQueue();
    explainList();
    explainVector();
    explainPair();
    return 0;
}