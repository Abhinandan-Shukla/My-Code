//Max depth of a Binary Tree
//Given a binary tree, find its maximum depth.
//The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root)
{
    if(root)
    {
        int rcount=1,lcount=1;
        if(root->left)
        {
            lcount+=maxDepth(root->left);
        }
        if(root->right)
        {
            rcount+=maxDepth(root->right);
        }
        if(rcount>lcount)
        return rcount;
        else return lcount;
    }
    else return 0;
}
