class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
    vector<vector<int>> vis(grid.size(),(vector<int>(grid[0].size(),0)));
    // this is my visited matrix
int maxi = 0;
int cc[]={0,0,-1,1};
int rr[]={1,-1,0,0};
for(int i = 0; i<grid.size();i++){
    for(int j=0;j<grid[i].size();j++){
        if(vis[i][j]==0 && grid[i][j]==1){
            vis[i][j]=1;
            queue<pair<int,int>>q;
            int count =0;
            count++;
            q.push({i,j});
            while(!q.empty()){
                int c = q.front().first;
                int r = q.front().second;
                for(int i = 0; i <4;i++){
                    int nc=c+cc[i];
                    int nr=r+rr[i];
if(nc>=0 && nc<grid.size() && nr>=0 && nr<grid[0].size()&& vis[nc][nr]==0 && grid[nc][nr]==1){
    vis[nc][nr]=1;
    q.push({nc,nr});
    count++;
}
                }
         q.pop();
            }
            maxi=max(maxi,count);
        }
    }
}

return maxi;
    }
};