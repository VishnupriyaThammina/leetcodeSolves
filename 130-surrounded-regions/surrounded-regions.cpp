class Solution {
public:
    void solve(vector<vector<char>>& b) {
        // initially i have future column and row requirments
        int cc[] = {0,0,1,-1};
        int rr[] = {1,-1,0,0};
        vector<vector<int>> vis(b.size(),vector<int>(b[0].size()));
        queue<pair<int,int>>q;
    int flag = 0;
        vector<pair<int,int>> im;
        for(int i = 0; i <b.size();i++){
            for(int j = 0; j<b[i].size();j++){
                if(b[i][j]=='O' && vis[i][j]==0){
                    vis[i][j]=1;
                    
                    q.push({i,j});
im.push_back({i,j});
 
 while(!q.empty()){
      if(q.front().first == 0 ||q.front().first==b.size()-1 || q.front().second == 0 || q.front().second== b[0].size()-1){
                    flag = 1;
                }
                        for(int k = 0; k<4;k++){
                            int nc = q.front().first+cc[k];
                            int nr = q.front().second+rr[k];
if( nc >=0 &&nc< b.size() && nr >=0 && nr<b[i].size()&& b[nc][nr]=='O' && vis[nc][nr]==0 ){
    vis[nc][nr]=1;
    q.push({nc,nr});
    im.push_back({nc,nr});
    
}         }
                        q.pop();
 }
                    if(flag==0){
                        for(auto p : im){
                             b[p.first][p.second]='X';
                        }
                    }
                    im.clear();
                    flag = 0;
                }
            }
        }

     
    }
};