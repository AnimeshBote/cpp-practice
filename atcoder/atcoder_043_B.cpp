#include<iostream>
#include <algorithm>
#include<stack>
using namespace std;
int main() {
    string s;
    cin >> s;
    stack<char> q;
    for(int i = 0; i<s.length(); i++) {
        char ch = s[i];
        if(ch == '0' || ch == '1') {
            q.push(ch);
        } else {
            if(!q.empty())
                q.pop();
        }
    }
    string ans;
    while(!q.empty()) {
        ans += q.top();
        // cout << "ans : " << ans << endl;
        q.pop();
    }
    reverse(ans.begin(), ans.end());
    cout << ans;
}