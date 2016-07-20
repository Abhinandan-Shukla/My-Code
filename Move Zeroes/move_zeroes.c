/* Move Zeroes
Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.
For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0].
Note:
You must do this in-place without making a copy of the array.
Minimize the total number of operations.
*/

void swap(int* nums,int a,int b)
{
    int temp;
    temp=nums[a];
    nums[a]=nums[b];
    nums[b]=temp;
}


void moveZeroes(int* nums, int numsSize)
{
    int i,count=0;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]==0)
            count++;
        else
            swap(nums,i,i-count);
    }
}
