class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        // lets make an adjacency list first
        unordered_map<int,vector<int>> al;
        for(int i =0; i <isConnected.size();i++){
            for(int j=0;j<isConnected[i].size();j++){
             if(isConnected[i][j]==1){   al[i].push_back(j);}
            }
        }
        int n = isConnected.size();
unordered_map<int , bool> vis;
        int prov =0;
        queue<int> q;
        for(int i=0; i<n;i++){
if(vis[i]==0){
    prov++;
q.push(i);
while(!q.empty()){
vis[q.front()]=1;

    for(auto j : al[q.front()]){
        if(vis[j]==0){
            q.push(j);
            vis[j]=1;
        }
    }
    q.pop();
}
}
        }
        return prov;
    }
};