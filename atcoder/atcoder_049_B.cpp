#include<iostream>
using namespace std;
int main () {
    int h,w;
    cin >> h >> w;
    for(int i=0; i<h; i++) {
        char arr[w];
        for(int j=0; j<w; j++) {
            cin >> arr[j];
            cout << arr[j];
        }
        cout << endl;
        for(int j=0; j<w; j++) {
            cout << arr[j];
        }
        cout << endl;
    }
    return 0;
}
/**
algo: 

i = t+1/2
2i-1 = t


t,j = t+1/2, j

*/