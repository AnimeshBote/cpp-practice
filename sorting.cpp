#include<iostream>
using namespace std;
void print(vector<vector<int>>& ans) {
    for(auto i: ans) {
        for(int x: i) {
            cout << x << " : ";
        }
        cout<< endl;
    } 
}
int main() {
    vector<vector<int>> ans = {{1,2,3}, {4,5,6}, {7,8,9}};
    print(ans);
    // sorting array based on the second column in descending order
    sort(ans.begin(), ans.end(), [] (const std::vector<int>& a, const std::vector<int>& b) {
        return a[1] > b[1];
    });
    cout << " ================== " << endl;
    print(ans);
    return 0;
}