#include <string>  
#include <iostream>

class Solution {
    public:
        std::string largestGoodInteger(std::string num) {
            std::string max_num = "";
            for(int i = 0; i < num.length() - 2; i++) {
                
                std::string current = "";

                current += num[i];
                current += num[i + 1];
                current += num[i + 2];
                
                int currentInt = std::stoi(current);
                if(currentInt % 111 == 0) {
                    if(max_num == "" || currentInt > std::stoi(max_num)) {
                        max_num = current;
                    }
                }
            }
            return max_num;
        }
    };


int main() {
    Solution solution;
    std::string num = "42352338";
    std::string result = solution.largestGoodInteger(num);
    std::cout << result << std::endl; // Expected output: "777"
    return 0;
}