#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Runtime: 35 ms
// Memory Usage: 12.4 MB
void island(vector<vector<char>>& grid, int i, int j){
    if(i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == '0'){
        return;
    }
    grid[i][j] = '0';

    island(grid, i + 1, j);
    island(grid, i, j + 1);
    island(grid, i - 1, j);
    island(grid, i, j - 1);
}

int numIslands(vector<vector<char>>& grid) {
    int result  = 0;
    int m = grid.size();
    int n = grid[0].size();

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(grid[i][j]=='1'){
                result++;
                island(grid, i , j);
            }
        }
    }
    return result;
}




