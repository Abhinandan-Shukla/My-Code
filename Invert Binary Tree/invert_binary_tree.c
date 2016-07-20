/* Invert a Binary Tree
Invert a binary tree.

     4
   /   \
  2     7
 / \   / \
1   3 6   9

to
     4
   /   \
  7     2
 / \   / \
9   6 3   1

*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* invertTree(struct TreeNode* root)
{
    if(root)
    {
        if(root->left)
            invertTree(root->left);

        if(root->right)
            invertTree(root->right);

        struct TreeNode* temp= root->right;
        root->right=root->left;
        root->left=temp;

        return root;
    }
    else return NULL;
}
