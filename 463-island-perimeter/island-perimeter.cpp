class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
vector<vector<int>> vis(grid.size(),vector<int>(grid[0].size()));
int peri = 0;
int cc[] = {0,0,1,-1};
int rr[] = {1,-1,0,0};
for(int i = 0; i < grid.size();i++)
{
    for(int j = 0 ; j < grid[i].size();j++)
    {
        if(vis[i][j]==0 && grid[i][j]==1){
            vis[i][j]=1;
            for(int k = 0; k < 4;k++){
                int nc = i + cc[k];
                int nr = j + rr[k];
                if(nc<0 || nc>=grid.size() || nr <0 || nr>=grid[0].size()){
                    peri++;
                }
                else if(nc>=0 && nc < grid.size() && nr >= 0 && nr < grid[0].size() && grid[nc][nr]==0){
                  
                        peri++;
                 
                }
            }
        }
    }
}

return peri;
    }
};