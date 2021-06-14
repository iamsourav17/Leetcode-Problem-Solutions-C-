class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *temp = NULL;
        ListNode *next = NULL;
        while(slow != NULL)
        {
            next =slow->next;
            slow->next = temp;
            temp = slow;
            slow = next;

        }
        while(temp != NULL)
        {
            if(head->val != temp->val)
            {
                return false;
            }
            head = head->next;
            temp = temp->next;

        }
        return true;

    }
};
