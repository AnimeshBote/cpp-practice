#include<iostream>
using namespace std;
using ll = long long;
int main() {
    ll a,b,x;
    cin >> a >> b >> x;
    ll ans = 0;
    if(a % x != 0) {
        a = x - (a % x) + a;
    }
    if(b % x != 0) {
        b = b - (b % x);
    }
    ans = ((b - a) / x) + 1;
    cout << ans << endl;
    return 0;
}
/**
algo:
if a is not divisible by x then convert a into the next divisible number. 
if b is not divisible by x then convert b into next divisible number.
apply simple formula b-a/x + 1 
print 
*/