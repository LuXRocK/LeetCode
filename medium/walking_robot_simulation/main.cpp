#include <iostream>
#include <vector>

int robotSim(std::vector<int>& commands, std::vector<std::vector<int>>& obstacles){
    int robotPos[2] = {0, 0};
    int directions[4] = {1, 2, 3, 4};
    int robotDirect = 0;
    if(obstacles.size() == 0){
        for(int i = 0; i < commands.size(); i++){
            if(commands[i] < 0){
                if(commands[i] == -1){
                    robotDirect += 1;
                }else{
                    robotDirect -= 1;
                }
            }
        }
    }
    return 0;
}

int main(){
    std::cout << "Hello, World!" << std::endl;
    return 0;
}