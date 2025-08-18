#include <iostream>
#include <vector>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(std::vector<int>& nums, int low, int high){
    int pivot = nums[high];
    int i = (low - 1);

    for(int j = 0; j < high; j++){
        if(nums[j] <= pivot){
            i++;
            swap(&nums[i], &nums[j]);
        }
    }
    swap(&nums[i+1], &nums[high]);
    return (i+1);
}

void quickSort(std::vector<int> nums, int low, int high){
    if(low < high){
        int pi = partition(nums, low, high);
        quickSort(nums, low, pi - 1);
        quickSort(nums, pi+1, high);
    }
}

std::vector<int> sortArray(std::vector<int>& nums){
    quickSort(nums, 0, nums.size());
    for(auto& i : nums){
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return nums;
}

int main(){
    std::cout << "Hello World!" << std::endl;
    std::vector<int> nums = {5,2,3,1};
    int n = nums.size()-1;
    std::cout << nums[n] << std::endl;
    sortArray(nums);
    return 0;
}