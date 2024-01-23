#include<iostream>
#include<queue>
#include<vector>
using namespace std;


class customSortMethod1 {
public:
    bool operator()(int a, int b) const {
        return a - b;
    }
};

class customSortMethod2 {
public:
    // sort all the entries based on the first element in the vectors 
    bool operator()(const vector<int> &a, const vector<int> &b) const {
        // decending based on the 1st index element in the array.
        // below condition means when 1st index element in a is less than 1st index element in b then swap the elements when heapify is happening. 
        // this is the reason why below condition will create the maxHeap & not minHeap.
        // for other functions like sorting a < b sorts the element in the increasing order. 
        return a[1] < b[1];
    }
};

int main () {
    // method 1 :- Only with integers
    priority_queue<int, vector<int>, customSortMethod1> q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    while(!q1.empty()) {
        cout << q1.top() << endl;
        q1.pop();
    }

    cout << "======= Testing the second approach ========" << endl;
    // method 2 :- with vector<int> as each element in the pririty_queue
    priority_queue<vector<int>, vector<vector<int>>, customSortMethod2> q2;
    q2.push({1,2,3});
    q2.push({4,5,6});
    q2.push({7,3,1});

    while(!q2.empty()) {
        vector<int> elements = q2.top();
        for(auto& ele: elements) {
            cout << ele << " ";
        }
        cout << endl;
        q2.pop();
    }
    return 0;
}