class Solution
{
public:
    int getDecimalValue(ListNode *head)
    {
        int n = 0;
        ListNode *temp = head;
        while (temp != NULL)
        {
            temp = temp->next;
            n++;
        }
        int ans = 0;
        temp = head;
        while (temp != NULL)
        {
            if (temp->val == 1)
                ans += pow(2, n - 1);
            n--;
            temp = temp->next;
        }
        return ans;
    }
};