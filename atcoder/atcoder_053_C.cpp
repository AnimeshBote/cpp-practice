#include<iostream>
using namespace std;
#define ll long long int
int main() {
    ll n;
    cin >> n;
    ll div = n / 11;
    ll rem = n % 11;
    ll count = 0;
    if(rem >= 7) {
        count = count + 2;
    } else if (rem>0) {
        count = count + 1;
    }
    count = count + div * 2;
    cout << count << endl;
}
// 1 - 0
// 2 - 0
// 3 - 0
// 4 - 0
// 5 - 0
// 6 - 0
// 7 - 2
// 8 - 1
// 9 - 1
// 10 - 1
// 11 - 1
// 12 - 2
// 13 - 2 - 
// 14 - 2 - 5 3 6
// 15 - 2 (5 4 6)
// 16 - 2
// 17 - 2
// 18 - 3
// 1 2 3 
// 6 5 6 

// 18/11 => 7 

// >= 7 +1

// 1*2 => 2 



// 15
// 11 => 1 

// 2,3, 4,5


