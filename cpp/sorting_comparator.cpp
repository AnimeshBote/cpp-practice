#include<iostream>
using namespace std;
void print(vector<vector<int> >& ans) {
    for(auto i: ans) {
        for(int x: i) {
            cout << x << " : ";
        }
        cout<< endl;
    } 
}
class sortingLogic {
public:
    bool operator() (vector<int>& a, vector<int>& b) {
        return a[0] > b[0];
    }
};
int main() {
    vector< vector<int> > ans = {{1,2,3}, {4,5,6}, {7,8,9}};
    sortingLogic cmp;
    print(ans);
    // sorting array based on the second column in descending order
    sort(ans.begin(), ans.end(), cmp);
    cout << " ================== " << endl;
    print(ans);
    return 0;
}