
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* current =head;
        ListNode* previous = nullptr;
        while(current != nullptr)
        {
            ListNode* temp = current->next;
            current->next =previous;
            previous = current;
            current = temp;
        }
        return previous;
    }
};
