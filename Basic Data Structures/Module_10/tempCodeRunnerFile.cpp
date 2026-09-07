#include <bits/stdc++.h>
using namespace std;

class ListNode {
    public:
        int val;
        ListNode* next;

    ListNode(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return head;

        ListNode* temp = head;
        while(true) {
            if(temp->next == NULL) break;
            
            if(temp->val == temp->next->val) {
                temp->next = temp->next->next;
            }

            temp = temp->next;
        }

        return head;
    }
};

int main() {
    

    return 0;
}