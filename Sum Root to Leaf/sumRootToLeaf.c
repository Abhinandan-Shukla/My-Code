/* Sum Root to leaf Numbers
Given a binary tree containing digits from 0-9 only, each root-to-leaf path could represent a number.

An example is the root-to-leaf path 1->2->3 which represents the number 123.

Find the total sum of all root-to-leaf numbers.

For example,

    1
   / \
  2   3
The root-to-leaf path 1->2 represents the number 12.
The root-to-leaf path 1->3 represents the number 13.

Return the sum = 12 + 13 = 25.
*/

/*
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int total=0;

void sum(struct TreeNode* root,int cur)
{
    cur=cur*10 + root->val;
    if(!root->left && !root->right)
        total+=cur;
    if(root->left)  sum(root->left,cur);
    if(root->right) sum(root->right,cur);
}

int sumNumbers(struct TreeNode* root) {
    total=0;
    if(!root)
    return 0;
    int cur=0;
    sum(root,cur);
    return total;
}
