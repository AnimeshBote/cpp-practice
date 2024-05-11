#include<iostream>
using namespace std;
int main() {
    int w,h,n;
    cin >> w >> h >> n;
    int x0 = 0, y0 = 0, x1 = w, y1 = h;
    for(int i=0; i<n; i++) {
        int xi,yi,ai;
        cin>> xi >> yi >> ai;
        if(ai == 1) {
            x0 = max(x0, xi);
        } else if(ai == 2) {
            x1 = min(x1, xi);
        } else if(ai == 3) {
            y0 = max(y0, yi);
        } else if(ai == 4) {
            y1 = min(y1, yi);
        }
    }
    if((x0 >= x1) || (y0 >= y1)) {
        cout << 0 << endl;
    } else {
        cout << (x1 - x0) * (y1 - y0) << endl;
    }
}
/**
Algo:
take four endpoints of present rectangle x0 y0 x1 y1
iterate over all the commands
    xi, yi, ai
    if ai == 1
        x0 = max(x0, xi)
    else if ai == 2
        x1 = min(x1, xi)
    else if ai == 3
        y0 = max(y0, yi)
    else if ai == 4
        y1 = min(y1, yi)
if(x0 > x1) || y0 > y1 return 0
return (x1-x0) * (y1-y0)
*/