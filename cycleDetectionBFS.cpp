#include <bits/stdc++.h>
using namespace std;

class Solution{
    bool cycleDetection(int node,vector<int> &unvis,vector<int> adjList[]){
        queue<pair<int,int>> q;
        q.push({node,-1});
        unvis[node] = 1;
        while(!q.empty()){
            int a = q.front().first;
            q.pop();
            for(auto it: adjList[a]){
                if(!unvis[it]){
                    q.push({it,a});
                    unvis[a] = 1;
                }
                else if(unvis[it]){
                    if(it != q.front().second){
                        return true;
                    }
                }
            }    
        }
        return false;
    }
    
    public: 
        bool isCycle(vector<int> adjList[],int n){
            vector<int> unvis(n+1,0);
            for(int i = 1; i <= n; i++){
                if(!unvis[i]){
                    if(cycleDetection(i,unvis,adjList)){
                        return true;
                    }    
                }
            }
            return false;
        }
};

int main(){
    return 0;
}