class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        unordered_map<int,vector<int>> al;
        for(int i=0; i <rooms.size();i++){
            for(int j = 0; j<rooms[i].size();j++){
                al[i].push_back(rooms[i][j]);
            }
        }
        vector<bool>vis(n,0);
queue<int>q;
q.push(0);
while(!q.empty()){
    vis[q.front()]=1;
    for(auto i : al[q.front()]){
        if(vis[i]==0){
            q.push(i);
            vis[i]=1;
        }
    }
    q.pop();
}
    for(auto i : vis){
        if(i==0){
            return false;
        }
    }

    return true;
    }
};