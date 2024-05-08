#include<iostream>
using namespace std;
// dp[i][j] = ith len with sum = j.
int main() {
    int num[55];
    long long dp[55][3005];
    int n, a;
    cin >> n >> a;
    for(int i=1; i<=n; i++) {
        cin>>num[i];
    }
    dp[0][0] = 1;
    // calculate for all the lengths
    for(int i=1; i<=n; i++) {
        // for each length, go through all the previous lengths to find the ways to get to that sum.
        for(int j=i-1; j>=0; j--) {
            // for that length
            for(int k=0; k<=2500; k++) {
                // assume the sum till length j was k.
                int sum = num[i] + k;
                // by adding current element into previous sum we get above sum.
                dp[j+1][sum] += dp[j][k];
            }
        }
    }
    // calculate sum of elements in all the columns in the last row.
    long long ans = 0;
    for(int i=1; i<=n; i++) {
        ans += dp[i][a * i];
        // cout << ans << endl;
    }
    cout << ans << endl;
    return 0;
}

/**
i = 1 to n
    at each i level count number of ways of getting sum = target using i elements.

i = 1 to n
1 number -> possible ways to pick = freq of each element.
2 number -> for each element in array. New Target = target - curr. | get number of ways of achieveing new target with 1 number.
3 number -> for each number in arrya. new Target = target - curr | get 2 number of ways 


dp[j][k][s] = 1 if j = 0, k = 0, s = 0.
dp[j][k][s] = dp[j − 1][k][s] if j ≥ 1 and s < xj.
dp[j][k][s] = dp[j−1][k][s]+dp[j−1][k−1][s−xj] if j≥1, k≥1, and s≥xj.
To achieve the average of the chosen cards as A, for each k (1 ≤ k ≤ N), the sum should be kA. Therefore, the answer is ∑dp[N][k][kA] for k from 1 to N.
Using dynamic programming, the overall complexity is O(N3X).






*/

