class Solution {
    // Add this DFS function
    bool dfs(int node, int dest, vector<vector<int>>& Adjlist, vector<bool>& visited){
        if(node == dest) return true;
        visited[node] = true;
        for(int i = 0; i < Adjlist[node].size(); i++){
            if(!visited[Adjlist[node][i]]){
                if(dfs(Adjlist[node][i], dest, Adjlist, visited)) return true;
            }
        }
        return false;
    }

public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> Adjlist(n);  
        if(n == 1){
            return true;
        }
        for(int i = 0; i < edges.size(); i++){
            int u = edges[i][0];
            int v = edges[i][1];
            Adjlist[u].push_back(v);
            Adjlist[v].push_back(u);
        }

        // Remove your old 2 for loops and replace with this
        vector<bool> visited(n, false);
        return dfs(source, destination, Adjlist, visited);
    }
};