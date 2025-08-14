#include <iostream> 
#include <vector>

int timeRequiredToBuy(std::vector<int>& tickets, int k){
    int result = 0;
    for(int i = 0; i < tickets.size(); i++){
        if(i <= k){
            if(tickets[i] < tickets[k]) result += tickets[i];
            else result += tickets[k];
        }else{
            if(tickets[i] < tickets[k] - 1) result += tickets[i];
            else result += tickets[k] - 1;
        }
    }
    return result;
}

int main(){
    std::vector<int> tickets = {2,3,2};
    int k = 2;
    std::cout << timeRequiredToBuy(tickets, k) << std::endl;
    return 0;
}