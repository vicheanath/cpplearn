#include<bits/stdc++.h>

using namespace std;

// This is a DFS function
void dfs(int node, vector<int> adj[], vector<int> &vis){
    // Mark the current node as visited
    vis[node] = 1;
    // Traverse for all the nodes adjacent to this node
    for(auto it: adj[node]){
        if(!vis[it]){
            dfs(it, adj, vis);
        }
    }
}