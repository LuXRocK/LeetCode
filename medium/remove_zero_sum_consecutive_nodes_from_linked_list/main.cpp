#include <iostream>
#include <vector>
#include <bits/stdc++.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void printList(ListNode* head){
    if(!head) return;

    while(head){
        if(head->next) std::cout << head->val << " -> ";
        else std::cout << head->val;

        head = head->next;
    }
    std::cout << std::endl;
}

ListNode* removeZeroSumSublists(ListNode* head){
    if(!head) return 0;
    std::vector<int> list;

    while(head){
        list.push_back(head->val);
        head = head->next;
    }

    for(const auto& i : list){
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main(){
    ListNode* node5 = new ListNode(1);
    ListNode* node4 = new ListNode(3, node5);
    ListNode* node3 = new ListNode(-3, node4);
    ListNode* node2 = new ListNode(2, node3);
    ListNode* head = new ListNode(1, node2);

    removeZeroSumSublists(head);
    printList(head);

    std::cout << "Hello World!" << std::endl;
    return 0;
}