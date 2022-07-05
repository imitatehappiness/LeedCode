#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Runtime: 6 ms
// Memory Usage: 13.8 MB
vector<pair<int, int>> directions {{0,1}, {1,0}, {-1,0}, {0,-1}};
int srcColor;

void floodFillRecursive(vector<vector<int>>& image, int sr, int sc, int color){
    if (image[sr][sc] == srcColor) {
         image[sr][sc] = color;
     }
     
     for (auto& direction : directions) {
         int x = sr + direction.first;
         int y = sc + direction.second;
         if (x > -1 && x < image.size() && y > -1 && y < image[0].size() && image[x][y] == srcColor) {
             floodFillRecursive(image, x, y, color);
         }
     }
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    srcColor = image[sr][sc];
    if(color != srcColor){
        floodFillRecursive(image, sr, sc, color);
    }
    return image;
}

int main() {
    vector<vector<int>> image{{1,1,1},{1,1,0},{1,0,1}};
    vector<vector<int>> res = floodFill(image,1,1,2);
    return 0;
}



