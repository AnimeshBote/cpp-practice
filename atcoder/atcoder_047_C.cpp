#include<iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int count = 0;
    for(int i=1; i<s.length(); i++) {
        if(s[i-1] != s[i]) {
            count++;
        }
    }
    cout << count << endl;
}

/** algo 
starting with index 1 to n
    check if current words is diff from prev word
    if yes
        count++
return count 

WWWBBWWB = 3 
*/