#include<iostream>
using namespace std;
int main() {
    int n;
    string s;
    cin >> n >> s;
    int x = 0;
    int max_v = 0;
    for(char ch: s) {
        // cout << ch << endl;
        if(ch == 'I') {
            x++;
            max_v = max(max_v, x);
        } else {
            x--;
        }
    }
    cout << max_v << endl;
    return 0;
}