#include <iostream>
#include <vector>

int numTeams(std::vector<int>& rating){
    int output = 0;
    for(int i = 0; i < rating.size()-2; i++){
        for(int j = i+1; j < rating.size(); j++){
            if(rating[i] < rating[j]){
                for(int k = j+1; k < rating.size(); k++){
                    if(rating[j] < rating[k]){
                        output++;
                    }
                }
            }else if(rating[i] > rating[j]){
                for(int k = j+1; k < rating.size(); k++){
                    if(rating[j] > rating[k]){
                        output++;
                    }
                }
            }
        }
    }
    return output;
}

int main(){
    std::vector<int> rating = {1,2,3,4};
    std::cout << numTeams(rating) << std::endl;
    return 0;
}