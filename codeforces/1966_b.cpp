#include<iostream>
#include<vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        bool hasB[4] = {false, false, false, false};
        bool hasW[4] =  {false, false, false, false};
        vector<vector<char>> arr(n, vector<char>(m, 'x'));
        for(int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                cin >> arr[i][j];
                if(j==0) {
                    if(arr[i][j] == 'B')
                        hasB[0] = true;
                    if(arr[i][j] == 'W')
                        hasW[0] = true;
                }
                if(j==m-1) {
                    if(arr[i][j] == 'B')
                        hasB[1] = true;
                    if(arr[i][j] == 'W')
                        hasW[1] = true;
                }
                if(i == 0) {
                    if(arr[i][j] == 'B')
                        hasB[2] = true;
                    if(arr[i][j] == 'W') {
                        hasW[2] = true;
                    }
                        
                }
                if(i == n-1) {
                    if(arr[i][j] == 'B')
                        hasB[3] = true;
                    if(arr[i][j] == 'W')
                        hasW[3] = true;
                }
            }
        }
        // cout << hasB[2] << hasB[3] << endl;
        // cout << hasW[2] << hasW[3] << endl;
        if(arr[0][0] == arr[n-1][m-1] || arr[n-1][0] == arr[0][m-1]) {
            cout << "YES" << endl;
            continue;
        }
        if(n == 1 || m == 1) {
            cout << "NO" << endl;
            continue;
        }
        if(arr[0][0] == arr[n-1][0]) {
            char ch = arr[0][0];
            if(ch == 'B' && hasB[1]) {
                cout << "YES" << endl;
                continue;
            } else if(ch == 'W' && hasW[1]) {
                cout << "YES" << endl;
                continue;
            }
        }

        if(arr[0][m-1] == arr[n-1][m-1]) {
            char ch = arr[0][m-1];
            if(ch == 'B' && hasB[0]) {
                cout << "YES" << endl;
                continue;
            } else if(ch == 'W' && hasW[0]) {
                cout << "YES" << endl;
                continue;
            }
        }

        if(arr[0][0] == arr[0][m-1]) {
            char ch = arr[0][m-1];
            if(ch == 'B' && hasB[3]) {
                cout << "YES" << endl;
                continue;
            } else if(ch == 'W' && hasW[3]) {
                cout << "YES" << endl;
                continue;
            }
        }

        if(arr[n-1][0] == arr[n-1][m-1]) {
            char ch = arr[n-1][m-1];
            if(ch == 'B' && hasB[2]) {
                cout << "YES" << endl;
                continue;
            } else if(ch == 'W' && hasW[2]) {
                cout << "YES" << endl;
                continue;
            }
        }

        cout << "NO" << endl;
    }
}