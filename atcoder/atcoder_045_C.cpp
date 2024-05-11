#include<iostream>
#include<vector>
using namespace std;
using ll = long long;
ll ans = 0;
ll solve(string curr) {
    ll count = 1;
    ans += stol(curr);

    for(ll i=1; i<curr.length(); i++) {
        string subpart = curr.substr(0,i); 
        ll num = stol(subpart); 
        ll ret = solve(curr.substr(i));
        ll add = (ret * num);
        ans += add;
        count += ret;
    }
    return count;
}
int main() {
    string input;
    cin >> input;
    solve(input);
    cout << ans << endl;
    return 0;
}