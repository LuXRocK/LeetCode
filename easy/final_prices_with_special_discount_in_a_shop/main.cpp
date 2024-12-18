#include <vector>
#include <iostream>

std::vector<int> finalPrices(std::vector<int>& prices){
    std::vector<int> final_prices;
    for(int i = 0; i < prices.size(); i++){
        for(int k = i + 1; k < prices.size(); k++){
            if(prices[k] <= prices[i]){
                final_prices.push_back(prices[i] - prices[k]);
                break;
            }
        }
        if(final_prices.size() < i+1){
            final_prices.push_back(prices[i]);
        }
    }
    return final_prices;
}

int main(){
    std::vector<int> prices = {8, 4, 6, 2, 3};
    finalPrices(prices);
    return 0;
}