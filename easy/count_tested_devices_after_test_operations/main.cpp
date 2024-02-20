#include <iostream>
#include <vector>


int countTestedDevices(std::vector<int>& batteryPercentages){
    int n = batteryPercentages.size();
    int result = 0;
    for(int i = 0; i < n; i++){
        if(batteryPercentages[i] > 0){
            result += 1;
            for(int j = i + 1; j < n - 1; j++){
                if(batteryPercentages[j] > 0){
                    batteryPercentages[j] = batteryPercentages[j] - 1;
                }
            }
        }

    }
    return result;
}


int main(){
    std::vector<int> data = {0,1,2};
    countTestedDevices(data);
}