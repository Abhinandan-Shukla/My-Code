/*House Robber
You are a professional robber planning to rob houses along a street.
Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security system connected
and it will automatically contact the police if two adjacent houses were broken into on the same night.

Given a list of non-negative integers representing the amount of money of each house,
determine the maximum amount of money you can rob tonight without alerting the police.
*/

int rob(int* nums, int numsSize)
{
    if (numsSize<3)
    {
        if(nums[0]>nums[1])
        return nums[0];
        else return nums[1];
    }
    else
    {
        int b[numsSize];
        b[0]=nums[0];
        b[1]=(nums[0]>nums[1])?nums[0]:nums[1];
        int i;
        for(i=2;i<numsSize;i++)
        {
            if(b[i-1]>b[i-2]+nums[i])
            b[i]=b[i-1];
            else
            b[i]=b[i-2]+nums[i];
        }
        return b[numsSize-1];
    }
}
