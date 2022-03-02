#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> adjMat(n+1,vector<int>(n+1,0));
    while(m--){
        int u, v;
        cin >> u >> v;
        adjMat[u][v] = 1;
        adjMat[v][u] = 1;
    }
    for(int i = 0;i <= n+1;i++){
        for(int j = 0;j <= n+1;j++){
            cout << adjMat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}