class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
         int n=grid.size();
         int m=grid[0].size();
        vector<pair<int,int>>directions={{-1,0},{0,-1},{1,0},{0,1}};
       queue<pair<int,int>>q;
       for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
            if(grid[i][j]==0)q.push({i,j});
         }
       }
       while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
       

       for(auto dir:directions){
        int newX=x+dir.first;
        int newY=y+dir.second;
       
       if(newX>=0 && newX <n && newY>=0 && newY<m && grid[newX][newY]==INT_MAX){
        grid[newX][newY]=grid[x][y]+1;
        q.push({newX,newY});
       }
       }
       }
    }
    
};
