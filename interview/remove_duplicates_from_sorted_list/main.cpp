#include <iostream>
#include <vector>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* deleteDuplicates(ListNode* head){
    ListNode* new_head = head;
    if(head == nullptr) return head;
    while(new_head->next != nullptr){
        if(new_head->val == new_head->next->val){
            ListNode* duplicate = new_head->next;
            new_head->next = new_head->next->next;
            delete duplicate;
        }else{
            new_head = new_head->next;
        }
    }
    return head;
}