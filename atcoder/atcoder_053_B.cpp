#include<iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    bool afound = false;
    int aIdx = 0;
    int zIdx = 0;
    for(int i=0; i<s.length(); i++) {
        char ch = s[i];
        if(!afound && ch == 'A') {
            afound = true;
            aIdx = i;
        } else if(ch == 'Z') {
            zIdx = i;
        }
    }
    cout << zIdx - aIdx + 1 << endl;
    return 0;
}