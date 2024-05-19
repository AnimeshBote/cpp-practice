#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int>arr(n+1, 0);
    int sum = 0;
    for(int i=1; i<=n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    int m;
    cin >> m;
    for(int i=1; i<=m; i++) {
        int pi,xi;
        cin >> pi >> xi;
        int timeToComplete = arr[pi];
        int diff = xi - timeToComplete;
        cout << (sum + diff) << endl; 
    }
    return 0;
}