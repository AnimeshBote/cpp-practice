#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<string> inp(n, "");
    for(int i=0; i<n; i++) {
        cin >> inp[i];
    }
    vector<vector<int>> mp(n, vector<int>(26,0));
    int idx = 0;
    for(string x: inp) {
        for(int i=0; i<x.length(); i++) {
            mp[idx][x[i] - 'a']++;
        }
        idx++;
    }
    vector<int> arr(26,100);
    for(vector<int> v: mp) {
        for(int i=0; i<v.size(); i++) {
            arr[i] = min(arr[i], v[i]);
        }
    }
    string s;
    for(int i=0; i<26;i++) {
        for(int j=0; j<arr[i]; j++) {
            s += (char)(i + 'a');
        }
    }
    cout << s << endl;
    return 0;
}