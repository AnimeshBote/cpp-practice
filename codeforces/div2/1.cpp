#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int a,b,c;
        cin >> a >> b >> c;
        int sum = a+b+c;
        int count = 0;
        if(sum % 2 == 1) {
            cout << -1 << endl;
        } else {
            while(true ) {
                if(a <= b && a <= c) {
                    int diff = min(b,c) - a + 1;
                    b = b - diff;
                    c = c - diff;
                    count += diff;
                } else if(b <= c && b <= a) {
                    int diff = min(a,c) - b + 1;
                    a = a - diff;
                    c = c - diff;
                    count += diff;
                } else {
                    int diff = min(a,b) - c + 1;
                    a = a - diff;
                    b = b - diff;
                    count += diff;
                }
                if(b == 0) {
                    count += min(a,c);
                    break;
                }
                if(a == 0) {
                    count += min(b,c);
                    break;
                }
                if(c == 0) {
                    count += min(a,b);
                    break;
                }
            }
            
            cout << count << endl;
            
        }
    }
    return 0;
}
