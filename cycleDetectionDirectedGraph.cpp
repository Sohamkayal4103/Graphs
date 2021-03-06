// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    
    bool checkForCycle(int node,int vis[],int visdfs[],vector<int> adj[]){
        vis[node] = 1;
        visdfs[node] = 1;
        for(auto it : adj[node]){
            if(!vis[it]){
                if(checkForCycle(it,vis,visdfs,adj)){
                    return true;    
                }
            }else if(visdfs[it] == 1){
                return true;
            }
        }
        visdfs[node] = 0;
        return false;
    }
    
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        int vis[V],visdfs[V];
        memset(vis,0,sizeof vis);
        memset(visdfs,0,sizeof visdfs);
        for(int i = 0;i < V;i++){
            if(!vis[i]){
                if(checkForCycle(i,vis,visdfs,adj)){
                    return true;
                }
            }
        }
        return false;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends