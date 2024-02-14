#include <iostream>
#include <vector>

int islandPerimeter(std::vector<std::vector<int>>& grid){

    int perimeter = 0;

    for(int i = 0; i < grid.size(); i++){
        for(int j = 0; j < grid[i].size(); j++){
            std::cout << grid[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for(int i = 0; i < grid.size(); i++){
        for(int j = 0; j < grid[i].size(); j++){
            if(i > 0 && i < grid.size()-1){
                
            }
        }
    }
    std::cout << perimeter << std::endl;
}

int main(){
    
    std::vector<std::vector<int>> grid {{0,1,0,0},{1,1,1,0},{0,1,0,0},{1,1,0,0}};
    islandPerimeter(grid);
    return 0;
}