#include<iostream>
using namespace std;
int main() {
    int k,s;
    cin >> k >> s;
    int count = 0;
    for(int i=0; i <= k; i++) {
        for(int j=0; j<= k; j++) {
            if(s - (i + j) <= k && s - (i + j) >= 0) {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}