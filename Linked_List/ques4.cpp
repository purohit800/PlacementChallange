class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *prev = head;
        if (prev == NULL)
            return NULL;
        ListNode *temp = head->next;
        while (temp != NULL)
        {
            if (prev->val == temp->val)
            {
                ListNode *curr = temp->next;
                prev->next = curr;
                temp = curr;
            }
            else
            {
                ListNode *curr = temp->next;
                prev = temp;
                temp = curr;
            }
        }
        return head;
    }
};