#include<iostream>
#include<cmath>
using namespace std;
using ll = long long;
int main() {
    int n, k;
    cin >> n >> k;
    ll ans = 1;
    ans = ans * k * pow(k-1, n-1);
    cout << ans << endl;
    return 0;
}


// N K 

// _ _ _ _
// k k-1 k-1 k-1
// 2,2
// n(2),k(2)
//  2^1 * 1 = 2

// n(1),k(10)
//  10^1 * 9^0 = 10