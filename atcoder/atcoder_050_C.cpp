#include<iostream>
#include<cmath>
#include<map>
using namespace std;
#define lli long long int
long long int mod = 1000000007;
long long int pow_mod(int base, int exp) {
    long long int ans = 1;
    for(int i=0; i<exp; i++) {
        ans = ans * base % mod;
    }
    return ans;
}
int main() {
    int n;
    cin >> n;
    map<int, int> mp;
    bool res = false;
    int ans = 0;
    if(n % 2 == 1) {
        int start = n - 1;
        for(int i=0; i<n; i++) {
            int temp;
            cin >> temp;
            if(temp > start || temp % 2 == 1) {
                res = true;
                break;
            } else {
                mp[temp]++;
            }
        }
        for(const auto[key, value]: mp) {
            if(key == 0) {
                if(mp[key] != 1) {
                    res = true;
                    break;
                }
            } else {
                if(mp[key] != 2) {
                    res = true;
                    break;
                }
            }
        }
        ans = pow_mod(2, (start / 2));
    } else {
        int start = n - 1;
        for(int i=0; i<n; i++) {
            int temp;
            cin >> temp;
            if(temp > start || temp % 2 == 0) {
                res = true;
                break;
            } else {
                mp[temp]++;
            }
        }
        for(const auto[key, value]: mp) {
            if(mp[key] != 2) {
                res = true;
                break;
            }
        }
        ans = pow_mod(2, (n/2));
    }
    if(res) {
        cout << 0 << endl;
    } else {
        cout << ans << endl;
    }
    return 0;   
}