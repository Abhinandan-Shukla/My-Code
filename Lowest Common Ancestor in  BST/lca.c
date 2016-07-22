/* Lowest common ancestor in a BST
Given a binary search tree (BST), find the lowest common ancestor (LCA) of two given nodes in the BST.

        _______6______
       /              \
    ___2__          ___8__
   /      \        /      \
   0      _4       7       9
         /  \
         3   5
For example, the lowest common ancestor (LCA) of nodes 2 and 8 is 6.
Another example is LCA of nodes 2 and 4 is 2, since a node can be a descendant of itself according to the LCA definition.
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q)
{
    int max,min;
    max=(p->val>q->val)?p->val:q->val;
    min=(p->val<q->val)?p->val:q->val;
    if(root->val<min)
        return lowestCommonAncestor(root->right,p,q);
    else if(root->val>max)
        return lowestCommonAncestor(root->left,p,q);
    else return root;

}
