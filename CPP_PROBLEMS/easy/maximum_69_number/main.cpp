#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Solution {
    public: 
        int maximum69Number (int num) {
            std::string strNum = std::to_string(num);
            std::vector<int> numbers;
            numbers.push_back(num);
            for(int i = 0; i < strNum.length(); i++) {
                if(strNum[i] == '6') {
                    strNum[i] = '9';
                    numbers.push_back(std::stoi(strNum));
                    strNum[i] = '6';
                }else if(strNum[i] == '9') {
                    strNum[i] = '6';
                    numbers.push_back(std::stoi(strNum));
                    strNum[i] = '9';
                }
            }
            return *std::max_element(numbers.begin(), numbers.end());
        }
};

int main() {
    Solution solution;
    int num = 9669;
    int result = solution.maximum69Number(num);
    std::cout << "The maximum number after changing one digit is: " << result << std::endl;
    return 0;
}