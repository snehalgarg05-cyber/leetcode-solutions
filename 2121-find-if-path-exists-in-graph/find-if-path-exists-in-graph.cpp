class Solution {
    bool dfs(int node, int dest, vector<vector<int>>& adj, vector<bool>& visited) {
        // Base case: reached destination!
        if(node == dest) return true;
        
        visited[node] = true; // mark current node visited
        
        // Try all neighbors
        for(int neighbor : adj[node]){
            if(!visited[neighbor]){
                // If any path leads to dest, return true
                if(dfs(neighbor, dest, adj, visited)) return true;
            }
        }
        return false; // no path found from this node
    }

public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source == destination) return true;
        
        // Build adjacency list
        vector<vector<int>> adj(n);
        for(auto& e : edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        
        vector<bool> visited(n, false);
        return dfs(source, destination, adj, visited);
    }
};