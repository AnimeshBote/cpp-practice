#include<iostream>
using namespace std;
int main() {
    int arr[26] = {0};
    string s;
    cin >> s;
    for(char x: s) {
        arr[x - 'a']++;
    }
    bool beautiful = true;
    for(int i=0; i<26; i++) {
        if(arr[i] % 2 == 1) {
            beautiful = false;
            break;
        }
    }
    string out = (beautiful) ? "Yes" : "No";
    cout << out;
    return 0;
}