#include <iostream>

class Solution {
    public:
    bool isPowerOfFour(int n) {
        if(n <= 0) return false;
        else if(n == 1) return true;
        else if(n % 4 != 0) return false;
        else return isPowerOfFour(n / 4);
    }
};

int main() {
    Solution solution = Solution();
    std::cout << solution.isPowerOfFour(16) << std::endl;
}