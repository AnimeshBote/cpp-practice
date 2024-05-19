#include <string>
#include <iostream>
#include <vector>
using namespace std;
string s;
int main() {
	cin >> s;
    int n = s.length();
    vector<int> dp(n+1, 0);
	dp[0] = 1;
	for(int i=5; i<=n; i++) {
        if(dp[i-5] == 1 && (s.substr(i-5, 5) == "dream" || s.substr(i-5,5) == "erase")) {
            dp[i] = 1;
        }
        if(i-7 >= 0 && dp[i-7] == 1 && s.substr(i-7, 7) == "dreamer") {
            dp[i] = 1;
        }
        if(i-6 >= 0 && dp[i-6] == 1 && s.substr(i-6, 6) == "eraser") {
            dp[i] = 1;
        }
    }
	cout << ((dp[n] == 1) ? "YES" : "NO") << endl;
	return 0;
}

/**
algo :
erasedream

for i=0 to n
    for j = 0 j<i
        if(dp[j]) {
            len = i - j
            substring  = s.substr(j+1, len) // i included
            if(dict.contains(substring))
                dp[i] = 1
        }
cout << dp[n-1]
*/