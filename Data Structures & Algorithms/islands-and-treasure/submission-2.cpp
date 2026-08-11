class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        if(grid.empty() || grid[0].empty()) return;
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]== 0){
                    q.push({i,j});
                }
            }
        }
        vector<vector<int>>dirs={{1,0},{0,1},{-1,0},{0,-1}};

        while(!q.empty()){
           auto curr=q.front();
           q.pop();
           int x=curr.first;
           int y=curr.second;
           for(auto dir:dirs){
            int nx=x+dir[0];
            int ny=y+dir[1];
            if( nx>=0 && nx<n && ny>=0 && ny<m &&grid[nx][ny]== 2147483647){
                grid[nx][ny]=1+grid[x][y];
                q.push({nx,ny});
            }
           }
        }
        
    }
};
