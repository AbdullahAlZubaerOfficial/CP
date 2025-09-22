

/*

class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int closedIslands = 0;

    function<bool(int,int)> dfs = [&](int r,int c){
       if(r<0 || r>=rows || c<0 || c>=cols){
        return false;
       }
       if(grid[r][c]==1){
        return true;
       }


grid[r][c] = 1; // visited mark

bool up = dfs(r-1,c);
bool down = dfs(r+1,c);
bool left = dfs(r, c-1);
bool right = dfs(r,c+1);

return up && down && left && right;

    };


    for(int r=0; r<rows; r++){
        for(int c=0; c<cols; c++){
            if(grid[r][c]==0){
                if(dfs(r,c)){
                    closedIslands++;
                }
            }
        }
    }

    return closedIslands;

    }
};

*/