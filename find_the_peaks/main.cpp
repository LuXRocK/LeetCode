#include <iostream>
#include <vector>

std::vector<int> findPeaks(std::vector<int>& mountain){
    std::vector<int> result;
    for(int i = 1; i < mountain.size()-1; i++){
        if(mountain[i] > mountain[i-1] && mountain[i] > mountain[i+1]){
            result.push_back(i);
        }
    }

    return result;
}

int main(){
    std::vector<int> mountain = {2,4,4};
    findPeaks(mountain);


}