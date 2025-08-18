#include <iostream>
#include <vector>

void exist(std::vector<std::vector<char>>& board, std::string word){
    int x, y;
    std::vector<std::vector<int>> visited;
    for(int i = 0; i < board.size(); i++){
        for(int j = 0; j < board[i].size(); j++){
            if(board[i][j] == word[1]){
                x = i;
                y = j;
                visited.push_back({x,y});
            }
        }
        std::cout << std::endl;
    }
    std::cout << x << " " << y << std::endl;
    for(int i = 0; i < visited.size(); i++){
        for(int j = 0; j < visited[i].size(); j++){
            std::cout << visited[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main(){
    std::vector<std::vector<char>> board = {{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
    std::string word = "ABCCED";
    exist(board, word);
    std::cout << "Hello Wordl!" << std::endl;
    return 0;
}