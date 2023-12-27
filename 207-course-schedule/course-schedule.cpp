class Solution {
public:
// / this is a cycle detection algorithm in direct graph 
// can be done using dfs
bool dfs( unordered_map<int,vector<int>>& al,int src,unordered_map<int,bool>& vis,unordered_map<int,bool>& dfsvis){
    vis[src]=1;
    dfsvis[src]=1;
    for(auto i : al[src]){
        if(vis[i]==0){
               bool ans = dfs(al,i,vis,dfsvis);
if(ans==true){
    return true;
}
        }else if(dfsvis[i]==true){
            return true;
        }

    }
    dfsvis[src]=0;
    return false;
}
    bool canFinish(int n, vector<vector<int>>& p) {
     // lets 1st make an unordered adjacency list
     unordered_map<int,vector<int>> al;
for(int i =0; i <p.size();i++){
al[p[i][0]].push_back(p[i][1]);
}
// now we need
//visited and dfs visited data structures
unordered_map<int,bool> vis;
unordered_map<int,bool> dfsvis;
for(int i =0; i <n;i++){
if(vis[i]==0){
    bool ans = dfs(al,i,vis,dfsvis);
    if(ans==true){
        return false;
    }
}
}
return true;
    }
};