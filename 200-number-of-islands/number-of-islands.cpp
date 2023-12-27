class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        //first things first
        /// we make a visited 2d matrix
    vector<vector<int>> vis(grid.size(),(vector<int>(grid[0].size(),0)));
int res = 0;
// now we declare neighbouring indices
int cc[] = {0,0,1,-1};
int rr[] = {1,-1,0,0};

for(int i = 0; i < grid.size();i++){
    for(int j = 0; j<grid[i].size();j++){
        if(grid[i][j]=='1' && vis[i][j]==0){
            res++;
            queue<pair<int,int>> q;
            q.push({i,j});
            vis[i][j]=1;
            while(!q.empty()){
                for(int k = 0; k <4;k++){
                    int ncol = q.front().first+cc[k];
                    int nrow = q.front().second+rr[k];
                    if(ncol>=0 && ncol<grid.size() && nrow>=0 && nrow<grid[0].size() && grid[ncol][nrow]!='0' && vis[ncol][nrow]==0){
vis[ncol][nrow]=1;
q.push({ncol,nrow});
                    }
                }
                q.pop();
            }
        }
    }
}
return res;
        

    }
};