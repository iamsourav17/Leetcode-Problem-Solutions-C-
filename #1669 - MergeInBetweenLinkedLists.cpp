class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {

        ListNode *s,*e,*m;
        s = list1;
        e =list1;
        m = list2;
        while(m->next != NULL)
        {
            m = m->next;
        }
        a -=1;
        while(a > 0)
        {
            s = s->next;
            a--;
        }
        b += 1;
        while( b > 0)
        {
            e =e->next;
            b--;
        }

        s->next = list2;
        m->next = e;
        return list1;

    }
};
