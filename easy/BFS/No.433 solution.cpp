    int array1[4] = {0,0,1,-1};
    int array2[4] = {1,-1,0,0}; // easy way to change index
    bool valid(int col, int row, vector<vector<bool>> &grid){
    // check the index is valid or not
        int colsize = grid[0].size();
        int rowsize = grid.size();
        // index must < size
        return col < colsize && row < rowsize && col >= 0 && row >= 0;
    }
    void BFS(int col, int row, vector<vector<bool>> &grid){
        if(!valid(col,row,grid)){
        // not valid index return
            return;
        }
        if(!grid[row][col]){
        // value is false return 
            return;
        }
        grid[row][col] = false;
        for(int i = 0; i < 4; i++){
        // for loop to change index up, down, left, right
            BFS(col+array1[i],row+array2[i],grid);
        }
    }
    int numIslands(vector<vector<bool>> &grid) {
        // write your code here
        int result = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(grid[i][j]){
                // if has a true, extend the island and result ++
                    BFS(j, i, grid);
                    result ++;
                }
            }
        }
        return result;
    }
