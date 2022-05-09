class Solution
{
public:
    int rangeSumBST(TreeNode *root, int low, int high)
    {
        if (root == NULL)
            return 0;
        int a = 0;
        if (root->val >= low and root->val <= high)
            a += root->val + rangeSumBST(root->left, low, high) + rangeSumBST(root->right, low, high);
        else if (root->val < low)
            a = rangeSumBST(root->right, low, high);
        else
            a = rangeSumBST(root->left, low, high);
        return a;
    }
};