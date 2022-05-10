class Solution
{
public:
    TreeNode *mergeTrees(TreeNode *root1, TreeNode *root2)
    {
        if (root1 == NULL and root2 == NULL)
            return NULL;
        TreeNode *root3 = new TreeNode(0);
        if (root1 != NULL and root2 != NULL)
        {
            root3->val = root1->val + root2->val;
            root3->left = mergeTrees(root1->left, root2->left);
            root3->right = mergeTrees(root1->right, root2->right);
        }
        else if (root1 == NULL and root2 != NULL)
        {
            root3->val = root2->val;
            root3->left = mergeTrees(NULL, root2->left);
            root3->right = mergeTrees(NULL, root2->right);
        }
        else if (root1 != NULL and root2 == NULL)
        {
            root3->val = root1->val;
            root3->left = mergeTrees(root1->left, NULL);
            root3->right = mergeTrees(root1->right, NULL);
        }
        return root3;
    }
};