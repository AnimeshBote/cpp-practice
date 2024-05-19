#include<iostream>
#include<algorithm>
using namespace std;
using ll = long long;
int main() {
    ll n,x;
    cin >> n >> x;
    ll prev;
    cin>> prev;
    ll step = 0;
    for(ll i = 1; i < n; i++) {
        ll curr;
        cin >> curr;
        ll total = prev + curr;
        if(total > x) {
            ll diff = total - x;
            curr = max((ll)0, (curr - diff));
            step += diff;
            prev = curr;
        } else {
            prev = curr;
        }
    }
    cout << step <<endl;
}

/**
algo :
start from i=1 to n
    total = prev + curr 
    if (total > maxAllowed)
        diff = total - maxAllowed
        curr = max(0, curr - diff)
        steps += diff
cout << steps

*/