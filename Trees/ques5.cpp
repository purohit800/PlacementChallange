class Solution
{
public:
    bool check_rev(vector<int> v)
    {
        for (int i : v)
            cout << i << " ";
        cout << endl;
        int start = 0, end = v.size() - 1;
        while (start < end)
        {
            if (v[start] != v[end])
                return false;
            start++;
            end--;
        }
        return true;
    }
    bool isSymmetric(TreeNode *root)
    {
        queue<TreeNode *> q;
        if (root != NULL)
            q.push(root);
        while (!q.empty())
        {
            int k = q.size();
            cout << "p"
                 << " ";
            vector<int> v;
            for (int i = 0; i < k; i++)
            {
                TreeNode *temp = q.front();
                q.pop();
                if (temp->left != NULL)
                {
                    q.push(temp->left);
                    v.push_back(temp->left->val);
                }
                else if (temp->left == NULL)
                    v.push_back(-101);
                if (temp->right != NULL)
                {
                    q.push(temp->right);
                    v.push_back(temp->right->val);
                }
                else if (temp->right == NULL)
                    v.push_back(-101);
            }
            if (check_rev(v) == false)
                return false;
        }
        return true;
    }
};