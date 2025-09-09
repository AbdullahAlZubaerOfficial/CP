/*

class Solution { 
public: 
 
    bool vis[55][55]; 
    vector<pair<int,int>> d = {{0,-1},{0,1},{-1,0},{1,0}}; 
 
    int n,m; 
    int cnt;   // ekhane rakhlam ekta class member count 
 
    bool valid(int i,int j){ 
        if(i<0 || i>=n || j<0 || j>=m){   
            return false; 
        } 
        return true; 
    } 
 
    void dfs(int si,int sj,vector<vector<int>>& grid){ 
        vis[si][sj] = true; 
        cnt++;                
        for(int i=0; i<4; i++){ 
            int ci = si + d[i].first; 
            int cj = sj + d[i].second; 
            if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj]==1){ 
                dfs(ci,cj,grid); 
            } 
        } 
    } 
 
    int maxAreaOfIsland(vector<vector<int>>& grid) { 
        int ans = 0; 
        n = grid.size(); 
        m = grid[0].size(); 
        memset(vis,false,sizeof(vis)); 
 
        for(int i=0; i<n; i++){ 
            for(int j=0; j<m; j++){ 
                if(!vis[i][j] && grid[i][j]==1){ 
                    cnt = 0;            // protibar new island e count reset
                    dfs(i,j,grid);      // dfs run korbe void diye
                    ans = max(ans, cnt); 
                } 
            } 
        } 
        return ans;                            
    } 
};




question: https://leetcode.com/problems/max-area-of-island/



*/