class Solution {
public:

    void dfs(int node,vector<vector<int>>& adjlist,vector<bool>& visited){
        visited[node]=1;
        for(int j=0;j<adjlist[node].size();j++){
            if(!visited[adjlist[node][j]]){
                dfs(adjlist[node][j],adjlist,visited);
            }
        }
    }


    int findCircleNum(vector<vector<int>>& isConnected) {
        int V = isConnected.size();
        int count=0;
        vector<bool> visited(V,0);
        vector<vector<int>> adjlist(V);
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(isConnected[i][j]==1 && i!=j){
                    adjlist[i].push_back(j);
                    adjlist[j].push_back(i);
                }
            }
        }
        for(int i=0;i<V;i++){
            if(!visited[i]){
                count++;
                dfs(i,adjlist,visited);
            }
        }
        return count;
    }
};