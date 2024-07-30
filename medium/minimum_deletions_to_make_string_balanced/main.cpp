#include <iostream>
#include <string>

int minimumDeletions(std::string s){
    int result = 0;
    int count_b = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'b'){
            count_b++;
        }else if(s[i] == 'a' && count_b != 0){
            result++;
            count_b--;
        }
    }
    return result;
}

int main(){
    std::string s = "bbaaaaabb";
    std::cout << minimumDeletions(s) << std::endl;
    return 0;
}