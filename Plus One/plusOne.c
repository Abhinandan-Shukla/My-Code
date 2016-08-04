/* Plus One
Given a non-negative number represented as an array of digits, plus one to the number.
The digits are stored such that the most significant digit is at the head of the list.
*/

/*
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int* a = (int*)malloc(sizeof(int)*(digitsSize+1));
    int i;
    a[0]=0;
    int carry=1;
    for(i=digitsSize;i>0;i--)
    {
        a[i]=digits[i-1]+carry;
        if(carry)
    }
    i=digitsSize;
    a[i]+=1;
    while(a[i]>=10 && i>=0)
    {
        a[i]=a[i]%10;
        a[i-1]+=1;
        i--;
    }
    if(a[0]==1)
    {
        *returnSize=digitsSize+1;
        return a;
    }
    else
    {
        *returnSize=digitsSize;
        return a+1;
    }
}
