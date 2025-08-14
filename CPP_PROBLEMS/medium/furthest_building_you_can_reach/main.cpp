#include <iostream>
#include <vector>
#include <cstdlib>

int furthestBuilding(std::vector<int>& heights, int bricks, int ladders){
    int result = 0;

    for(int i = 0; i < heights.size(); i++){
        std::cout << heights[i] << " ";
        if(heights[i] >= heights[i+1]){
            result ++;
        }else{
            if(heights[i+1]-heights[i] >= bricks){
                result ++;
                bricks -= heights[i+1]-heights[i];
            }else if(ladders > 0){
                result ++;
                ladders --;
            }else{
                break;
            }
        }
    }
    std::cout << std::endl;
    std::cout << result << std::endl;

    return result;
}


int main(){

    std::vector<int> heights {14,3,19,3};
    
    furthestBuilding(heights, 17, 0);
    // std::cout << furthestBuilding(heights, 5, 1) << std::endl;
    return 0;
}