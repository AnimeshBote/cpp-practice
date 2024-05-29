#include<iostream>
using namespace std;
#define ll long long int
int main() {
    ll n, m;
    cin >> n >> m;
    ll s_to_c = n * 2;
    if( s_to_c > m) {
        // s are more than c
        if(m % 2 == 1) {
            m = m - 1;
        }
        ll pair = m / 2;
        cout << pair << endl;
    } else {
        // s are less than c 
        ll pair = s_to_c / 2;
        m = m - s_to_c;
        pair = pair + m/4;
        cout << pair << endl;
    }

    return 0;

}