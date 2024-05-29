#include<iostream>
#include<vector>
#include<unordered_map>
#include <unordered_set>
using namespace std;
int counter = 0;
int n,m;
void dfs(int start, unordered_map<int, vector<int> >& mp, unordered_set<int>& visited) {
    // mark visited
    visited.insert(start);
    if(visited.size() == n) {
        counter++;
    }
    // iterate over all the neighbours
    for(int nei: mp[start]) {
        if(!visited.contains(nei)) {
            dfs(nei, mp, visited);
        }
    }
    // mark unvisited
    visited.erase(start);
}
int main() {
    cin >> n >> m;
    unordered_map<int, vector<int> >mp;
    for(int i=0; i<m; i++) {
        int source, dest;
        cin >> source >> dest;
        mp[source].push_back(dest);
        mp[dest].push_back(source);
    }
    unordered_set<int> visited;
    dfs(1, mp, visited);
    cout << counter << endl;
    return 0;
}