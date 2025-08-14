#include <iostream>

int minimumLength(std::string s){
    int left = 0;
    int right = s.length()-1;

    while(left < right && s[left] == s[right]){
        char ch = s[left];
        while(left <= right && s[left] == ch){
            left++;
        }
        while(right >= left && s[right] == ch){
        right--;
        }
    }
    return right - left + 1;
}

int main(){
    std::cout << minimumLength("cabaabac") << std::endl;
    return 0;
}