class Solution {
public:
bool dfs(int src, unordered_map<int,bool>& dfsvis, unordered_map<int,bool>& vis,   unordered_map<int,vector<int>>& al,  vector<int>& res){
    vis[src]=1;
    dfsvis[src]=1;
    for(auto i : al[src]){
        if(vis[i]==0){
             bool ans = dfs(i,dfsvis,vis,al,res);
if(ans==1){
    return true;
}

        }
        else if(dfsvis[i]==true){
    return true;
}
    }
    res.push_back(src);

    dfsvis[src]=false;
    return false;
}
    vector<int> findOrder(int n, vector<vector<int>>& p) {
        unordered_map<int,vector<int>> al;
        // so the intuition behind this is 
        // finding a cycle in directed graph
        // for which we use dfs 
        // visited data structure and dfs visited dats structure
        // if there exists cycle return an empty vector else return 
        // respective result vector
// lests make directed adj list 1st
for(int i =0;i<p.size();i++){
    al[p[i][0]].push_back(p[i][1]);
}
        vector<int> res;
        unordered_map<int,bool> vis;
        unordered_map<int,bool>dfsvis;
        for(int i =0;i<n;i++){
            if(!vis[i]){
 bool ans = dfs(i,dfsvis,vis,al,res);
 if(ans==true){
     return {};
 }
            }
        }
    
    return res;
    }
};