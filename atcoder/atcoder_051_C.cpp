#include<iostream>
#include<cmath>
using namespace std;
void run(int x, char ch) {
    for(int i=0; i<x; i++) {
        cout << ch;
    }
}
int main() {
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int x = abs(x2 - x1);
    int y = abs(y2 - y1);
    run(y, 'U');
    run(x, 'R');
    run(y, 'D');
    run(x, 'L');
    cout << "L";
    run(y+1, 'U');
    run(x+1, 'R');
    cout << "DR";
    run(y+1, 'D');
    run(x+1, 'L');
    cout << "U";
    return 0;
}
/**  RLLURRDRDLLU UURDDLLUUURRDRDDDLLU
0 0 1 2
xdiff = x2 - x1 = 1
ydiff = y2 - y1 = 2

// first round trip
for(y times )
    print U

for x times 
    print R

for y times 
    print D

for x times 
    print L

// second round trip 
 print L
 for y + 1 times 
    print U
 for x + 1 times 
    print R
 print D
 print R
 for y + 1 times
    print D
 for x + 1 times
    print L
 print U



LUUURRD RDDDLLU
*/