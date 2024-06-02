#include<iostream>
#include<unordered_set>
#include<queue>
#include<algorithm>
using namespace std;
int main() {
    int x;
    cin >> x;
    int a;
    for(a=1; ;a++) {
        if(a*(a+1) >= 2 * x) {
            break;
        }
    }
    cout << a << endl;
    return 0;
}


// if(visited.contains(nei_3))
            // if(!visited.contains(nei_1) && nei_1 >= -1 * x) {
            //     visited.insert(nei_1);
            //     q.push(nei_1);
            // }
            // if(!visited.contains(nei_2) && nei_2 >= -1 * x) {
            //     visited.insert(nei_2);
            //     q.push(nei_2);
            // }
// 4 -1
// 1 -2 3 -4

// 0 1 -2 3 -4


// -2 1 3 -4
//    i   j

// -2 -4 3 1

// 4 -1 
// 0 1 -2 3 -4

// 0 -2 -4 3 1


// N = 4
// => 2 1 2
//    1 2 3 

// _ _ _ _ 

// N = 4 
// sum = 0
// j=3 to N
//     combi = 3 = 4-3+1 = 2 (N-j+1) of size j
//     middle_space = j-2;
//     sum = sum + combi * middle_space


// for(B = 1 to N)
//     dfs(B)

// dfs():
//     place B
//     for B=1 to N
