class Solution {
public:
int numIslands(vector<vector<char>>& grid) {
     int n = grid.size();
 int m = grid[0].size();
 vector<vector<int>> vis(n,(vector<int>(m)));
 int cc[]={0,0,1,-1};
 int rr[]={1,-1,0,0};

 queue<pair<int,int>> q;
 int count=0;
 for(int i = 0; i<n;i++){
     for(int j = 0; j < m;j++){
if(vis[i][j]==0 && grid[i][j]=='1'){
    q.push({i,j});
    count++;
        vis[i][j]=1;

    while(!q.empty()){    
        for(int k = 0; k<4;k++){
            int nc = q.front().first+cc[k];
            int nr = q.front().second+rr[k];
            if(nc>=0 && nc<n && nr>=0 && nr<m && grid[nc][nr]=='1'&& vis[nc][nr]==0){
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