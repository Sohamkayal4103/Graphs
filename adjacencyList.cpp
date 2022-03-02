#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<pair<int, int>>>adjList(n+1);
    while (m--)
    {
        int u,v,wt;
        cin >> u >> v >>wt;
        adjList[u].push_back({v,wt});
        adjList[v].push_back({u,wt});
    }
    for(int i = 0;i < n+1;i++){
        cout << i << " -> ";
        for(auto it : adjList[i]){
            cout << "(" << it.first << "," << it.second << ")" << " ";
        }
        cout << endl;
    }
    return 0;
}