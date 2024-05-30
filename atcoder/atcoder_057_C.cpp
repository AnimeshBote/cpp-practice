#include<iostream>
#include<cmath>
#include <algorithm>
#include <climits>
#define ll long long int
using namespace std;
int main() {
    ll n;
    cin >> n;
    ll min_v = LONG_MAX;
    for(ll i=1; i<=sqrt(n); i++) {
        if(n % i == 0) {
            ll div = n / i;
            min_v = min((ll)min_v, (max((ll)log10(i), (ll)log10(div)) + 1));
        }
    }
    cout << min_v << endl;
}
// algo:
// iterate over 1 to sqrt(n):
//     if(n % i == 0)
//         div = n / i 
//         min_V = min(min_v, max(log10(i),log10(div)) + 1);
// cout << min_v