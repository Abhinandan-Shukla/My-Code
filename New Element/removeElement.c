/*Remove Element
Given an array and a value, remove all instances of that value in place and return the new length.
Do not allocate extra space for another array, you must do this in place with constant memory.
The order of elements can be changed. It doesn't matter what you leave beyond the new length.

Example:
Given input array nums = [3,2,2,3], val = 3

Your function should return length = 2, with the first two elements of nums being 2.
*/

void swap(int* nums,int a,int b)
{
    int temp=nums[a];
    nums[a]=nums[b];
    nums[b]=temp;
}

int removeElement(int* nums, int numsSize, int val)
{
    int counter=0;
    int i,j;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]==val)
            counter++;
        else
        {
            if(counter!=0)
            {
                nums[i-counter]=nums[i];
            }
        }
    }
    return numsSize-counter;
}
