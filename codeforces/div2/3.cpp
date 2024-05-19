#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#define all(x) x.begin(), x.end() 
#define pb push_back
#define mk make_pair
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n+1);
        vector<pair<int,int>> even;
        vector<pair<int,int>> odd;
        for(int i=1; i<=n; i++) {
            cin >> v[i];
            if(i % 2 == 0) {
                even.pb(mk(v[i], i));
            } else {
                odd.pb(mk(v[i], i));
            }
        }
        
        sort(all(even));
        sort(all(odd));
        if(odd.back().first == n) {
            swap(odd, even);
        }
        vector<int> ans(n+1);
        // cout << n/2 << endl; 
        // arrange the top elements from n to n/2 + 1
        for(int i=0; i<n/2; i++) {
           
            ans[even[i].second] = n - i;
        }
        for(int i=0; i<n/2; i++) {
            
            ans[odd[i].second] = n - n/2 - i;
        }

        for(int i=1; i<=n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// 1 + (3-1)/2 
// 1 + 1 = 2 
// 1 2 3 4
// 3 4 1 2
// 4 6 4 6
// 3 5 4 8
// 1 2 4 5 7 6 8 3
// 2 5 1 6 3 7 4 8
// --------------------
//    3 7 5 11 10 13 12 11
//      1   2     3  
// algo : 
// at each i even pos:
//     place the smallest number which is not ith number and visited.
// // at each i odd pos:
//     number > max(p[i-1] + q[i-1], p[i+1] + q[i-1]) - p[i] and not visited
// 6 5 1 4 2 3
// 1 4 2 5 3 6
// 7 9 3 9 5 9
// 1 2 3 4 5 6
// 6 5 1 4 2 3
// 1 4 3 5 2 6
// -------------
// 7 9 4 9 4 9
// odd => 5,4,3 => (3,5), (4,3), (5,1)
// even => 6,1,2 => (1,2), (2,4), (6,0)
               
// 6/2 => 3 | 4,5,6

