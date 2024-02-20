#include <iostream>
#include <vector>

int islandPerimeter(std::vector<std::vector<int>>& grid){

    int perimeter = 0;

    for(int i = 0; i < grid.size(); i++){
        for(int j = 0; j < grid[i].size(); j++){
            if(grid[i][j] == 1){
                perimeter += 4;
                if(i > 0 && grid[i-1][j] == 1){
                    perimeter -= 2;
                }
                if(j > 0  && grid[i][j-1] == 1){
                    perimeter -= 2;
                }
            }
        }
    }
    return perimeter;
}

int main(){
    
    std::vector<std::vector<int>> grid {{0},{1}};
    std::cout << islandPerimeter(grid) << std::endl;
    return 0;
}