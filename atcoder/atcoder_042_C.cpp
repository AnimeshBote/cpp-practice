#include<iostream>
#include<climits>
using namespace std;
int firstMinAfter(int idx, int arr[10]) {
    int minV = 0;
    for(int i=idx; i<10; i++) {
        if(arr[i] == 0) {
            minV = i;
            break;
        }
    }
    return minV;
}
int main() {
    int n, k;
    int* arr = new int[10];
    cin >> n >> k;
    
    for(int i=0; i<k; i++) {
        int temp;
        cin >> temp;
        arr[temp] = 1;
    }
    for(int i=n; 1; i++) {
        int dirty = 0;
        int temp = i;
        while(temp > 0) {
            int rem = temp % 10;
            temp = temp / 10;
            if(arr[rem]) {
                dirty = 1;
                break;
            }
        }
        if(dirty == 0) {
            cout << i;
            break;
        }
    }
    return 0;
}