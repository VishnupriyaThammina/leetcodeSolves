class Solution {
public:
int numIslands(vector<vector<char>>& grid) {
 vector<vector<int>> vis(grid.size(),(vector<int>(grid[0].size())));
 int cc[]={0,0,1,-1};
 int rr[]={1,-1,0,0};
 queue<pair<int,int>> q;
 int count=0;
 for(int i = 0; i<grid.size();i++){
     for(int j = 0; j < grid[i].size();j++){
if(vis[i][j]==0 && grid[i][j]=='1'){
    q.push({i,j});
    count++;
        vis[i][j]=1;

    while(!q.empty()){    
        int c = q.front().first;
        int r = q.front().second;

        for(int k = 0; k<4;k++){
            int nc = c+cc[k];
            int nr = r+rr[k];
            if(nc>=0 && nc<grid.size() && nr>=0 && nr<grid[0].size() && grid[nc][nr]=='1'&& vis[nc][nr]==0){
                vis[nc][nr]=1;
                q.push({nc,nr});
            }
        }
        q.pop();
    }
}
     }
 }
        return count;
    }
};