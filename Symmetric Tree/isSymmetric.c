/* Symmetric Tree
Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).

For example, this binary tree [1,2,2,3,4,4,3] is symmetric:

    1
   / \
  2   2
 / \ / \
3  4 4  3
But the following [1,2,2,null,3,null,3] is not:
    1
   / \
  2   2
   \   \
   3    3
*/

/*
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool compare(struct TreeNode* a, struct TreeNode* b)
{
    if(a && b)
    {
        if(a->val!=b->val)
            return 0;
        else
            return (compare(a->left,b->right) && compare(a->right,b->left));
    }
    else if(!(a || b))
        return 1;
    else
        return 0;
}

bool isSymmetric(struct TreeNode* root) {
    if(root)
    return compare(root->left,root->right);
    else return 1;
}
