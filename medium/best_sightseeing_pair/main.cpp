#include <iostream>
#include <vector>

int maxScoreSightseeingPair(std::vector<int>& values){
    int max_val = 0;

    for(int i = 0; i < values.size(); i++){
        for(int j = i + 1; j < values.size(); j++){
            if(values[i] + values[j] + i - j > max_val){
                max_val = values[i] + values[j] + i - j;
            }
        }
    }

    return max_val;
}

int main(){
    std::vector<int> values = {1, 2};
    std::cout << maxScoreSightseeingPair(values) << std::endl;
}