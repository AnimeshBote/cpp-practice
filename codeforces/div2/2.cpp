#include<iostream>
#include<vector>
using namespace std;
bool check(int k, vector<int> arr, int n) {
    int run = 0;
    vector<int> bits(20, 0);
    for(int i=1; i<=k; i++) {
        run = run | arr[i];
        // cout << "run : " << i << " : " << run << endl;
        for(int l=0; l<20; l++) {
            bits[l] += (arr[i] >> l) & 1;
        }
    }
    for(int i=k+1; i<=n; i++) {
        int sum = 0;
        for(int l=0; l<20; l++) {
            bits[l] -= (arr[i-k] >> l) & 1;
            bits[l] += (arr[i] >> l) & 1;
            if(bits[l]) {
                sum = sum | (1 << l);
            }
        }
        // cout << "\n i : " << i << endl;
        if(sum != run) {
            // cout << "returning false " << k << endl;
            return false;
        }
    }
    return true;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n+1,0);
        for(int i=1; i<=n; i++) {
            cin >> arr[i];
        }
        int l=1, r=n;
        while(l < r) {
            int mid = l + (r - l)/2;
            // cout << "mid : " <<  mid << endl;
            if(check(mid, arr, n)) {
                r = mid;
            } else{
                l = mid + 1;
            }
        }
        cout << l << endl;
    }
}

// 1 + (3-1)/2 
// 1 + 1 = 2 