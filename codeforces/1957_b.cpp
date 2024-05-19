#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,k;
        cin >> n >> k;
        vector<int> v(n, 0);
        if(n == 1) {
            v[0] = k;
        } else {
            int msb = 0;
            for(int i=0; i<32; i++) {
                if(k & (1 << i)) {
                    msb = i;
                }
            }
            v[0] = pow(2, msb) - 1;
            v[1] = k - v[0];
            for(int i=2; i<n; i++) {
                v[i] = 0;
            }
        }

        for(int x : v) {
            cout << x << " ";
        }
        cout << endl;
    }
}