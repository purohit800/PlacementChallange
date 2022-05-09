class Solution
{
public:
    int height(TreeNode *root, int &dia)
    {
        if (root == NULL)
            return 0;
        else
        {
            int lh = height(root->left, dia);
            int rh = height(root->right, dia);
            dia = max(lh + rh + 1, dia);
            return max(lh, rh) + 1;
        }
    }
    int diameterOfBinaryTree(TreeNode *root)
    {
        int dia = 0;
        int ht = height(root, dia);
        return dia - 1;
    }
};