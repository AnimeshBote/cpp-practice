#include<iostream>
#include<cmath>
using namespace std;
using ld = long double;
using ll = long long;
int main() {
    int n;
    cin >> n;
    ld prevX, prevY;
    cin >> prevX >> prevY;
    for(int i=1; i<n; i++) {
        ld currX, currY;
        cin >> currX >> currY;
        if(currX >= prevX && currY >= prevY) {
            prevX = currX;
            prevY = currY;
        } else if (currX <= prevX && currY <= prevY) {
            ld div1 = ceil(prevX / currX);
            ld div2 = ceil(prevY / currY);
            // cout << "div1 : " << div1 << "div 2 : " << div2 << endl;
            ld largerDiv = max(div1, div2);
            prevX = currX * largerDiv;
            prevY = currY * largerDiv;
        } else if(prevX < currX && prevY > currY) {
            ld div = ceil(prevY / currY);
            // cout << "currY < prevY : " << div << endl;
            prevY = currY * div;
            prevX = currX * div;
        } else {
            ld div = ceil(prevX / currX);
            // cout << "currX < prevX : " << div << endl;
            prevY = currY * div;
            prevX = currX * div;
        }
    }
    cout << (ll)(prevX + prevY) << endl;
    return 0;
}
/** algorithm : 
going from x   - z
        -----   ----
           y   - w
if both are greater then no issues
if both are less
    then find the divison value for both
    take the largest division value and multiply z & w by ceil of that division value
if one is greater and second is less   
    find division value for value which is decreasing in next iteration and get ceil of division
    multiply both the z and w with the value which we found above.

*/
 


