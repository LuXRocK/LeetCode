#include <iostream>
#include <vector>

void exist(std::vector<std::vector<char>>& board, std::string word){
    for(int i = 0; i < board.size(); i++){
        for(int j = 0; j < board[i].size(); j++){
            std::cout << board[i][j] << " ";
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