#include<iostream>
#include<map>
#include <vector>
#include<algorithm>
using namespace std;
int main() {
    vector<int> v;
    int n;
    cin >> n;
    int sum = 0;
    for(int i=0; i<n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
        sum += temp;
    }
    sum = sum / n;
    sort(v.begin(), v.end());
    int median_idx = (n % 2 == 1) n / 2 : n/2 - 1;
    int cost_1 = 0, cost_2 = 0;
    for(auto &x: v) {
        cost_1 += (sum - x) * (sum - x);
        cost_2 += (v[median_idx] - x) * (v[median_idx] - x);
    }
    cout << min(cost_1,cost_2);
    return 0;
}