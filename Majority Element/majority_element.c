/* Majority Element
Given an array of size n, find the majority element. The majority element is the element that appears more than floor(n/2) times.
You may assume that the array is non-empty and the majority element always exist in the array.
*/

int majorityElement(int* nums, int numsSize)
{
    int count=0,major_e,i;
    for(i=0;i<numsSize;i++)
    {
        if(count==0)
        {
            count++;
            major_e=nums[i];
        }
        else if(major_e==nums[i])
        {
            count++;
        }
        else
        count--;

    }
    return major_e;
}
