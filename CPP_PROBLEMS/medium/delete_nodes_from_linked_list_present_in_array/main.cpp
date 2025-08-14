#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* modifiedList(std::vector<int>& nums, ListNode* head){
    std::set<int> set;
    for(auto i : nums){
        set.insert(i);
    }
    while(head && set.contains(head->val)){
        head = head->next;
    }
    if(head == NULL){
        return NULL;
    }
    ListNode* current = head;
    ListNode* prev = current;
    while(current){
        if(set.contains(current->val)){
            current = prev;
        }else{
            prev = current;
            if(current->next){
                if(set.contains(current->next->val)){
                    current->next = current->next->next;
                }
            }
            current = current->next;
        }   
    }
    return head;
}

int main(){
    std::cout << "Hello, World!" << std::endl;
    ListNode* node4 = new ListNode(5);
    ListNode* node3 = new ListNode(4, node4);
    ListNode* node2 = new ListNode(3, node3);
    ListNode* node1 = new ListNode(2, node2);
    ListNode* head = new ListNode(1, node1);
    std::vector<int> nums {1, 2, 3};
    modifiedList(nums, head);
    return 0;
}