/* balance Binary Tree
Given a binary tree, determine if it is height-balanced.
For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1.
*/

/*
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int max(int a,int b)
{
    return (a>b)?a:b;
}

int* depth_diff(struct TreeNode* a)
{
    int *res;
    res=(int *)malloc(sizeof(int)*2);
    if(a!=NULL)
    {
        int *left=depth_diff(a->left);
        int *right=depth_diff(a->right);
        if(left[0]==1 && right[0]==1)
        {
            if(left[1]-right[1]<2 && left[1]-right[1]>-2)
            {
                res[0]=1;
                res[1]=max(left[1],right[1])+1;     // height of current node
            }
            else
            {
                res[0]=0;
                res[1]=0;
            }
        }
        else
        {
            res[0]=0;
            res[1]=0;
        }
        return res;
    }
    else
    {

       res[0]=1;
       res[1]=0;
       return res;
    }

}

bool isBalanced(struct TreeNode* root)
{
    return depth_diff(root)[0];
}
