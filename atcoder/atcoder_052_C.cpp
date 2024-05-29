#include<iostream>
#include<vector>
using namespace std;
#define ll long long int
int main() {
    int mod = 1000000007;
    int n;
    cin >> n;
    vector<int> arr(1001,0);
    for(int i=2; i<1001; i++) {
        for(int j=i+i; j<=n; j=j+i) {
            // mark non-prime;
            arr[j] = 1;
        }
    }

    ll ans = 1;
    for(int i=2; i<=n; i++) {
        if(arr[i] == 0) {
            int total = 0;
            for(int j=i; j<=n; j=j*i) {
                total = total + n/j;
            }
            ans = ans * (total + 1) % mod;
        }   
    }
    cout << ans << endl;
    return 0;
}