#include <iostream>
#include <vector>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2){
    if(list1 == nullptr) return list2;
    if(list2 == nullptr) return list1;

    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    if(list1->val < list2->val){
        head = tail = list1;
        list1 = list1->next;
    }else{
        head = tail = list2;
        list2 = list2->next;
    }

    while(list1 && list2){
        if(list1->val < list2->val){
            tail->next = list1;
            list1 = list1->next;
            tail = tail->next;
        }else{
            tail->next = list2;
            list2 = list2->next;
            tail = tail->next;
        }
    }
    if(list1 != nullptr){
        tail->next = list1;
    }else{
        tail->next = list2;
    }
    
    return head;
}

int main(){
    std::cout << "Hello, World!" << std::endl;
    ListNode* list1node3 = new ListNode(4);
    ListNode* list1node2 = new ListNode(2, list1node3);
    ListNode* list1head = new ListNode(1, list1node2);

    ListNode* list2node3 = new ListNode(4);
    ListNode* list2node2 = new ListNode(3, list2node3);
    ListNode* list2head = new ListNode(1, list2node2);
    return 0;
}