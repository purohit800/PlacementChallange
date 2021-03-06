class Solution
{
public:
    TreeNode *invertTree(TreeNode *root)
    {
        if (root != NULL)
        {
            swap(root->left, root->right);
            root->left = invertTree(root->left);
            root->right = invertTree(root->right);
        }
        return root;
    }
};