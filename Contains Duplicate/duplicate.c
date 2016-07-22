/* Contains Duplicate
Given an array of integers, find if the array contains any duplicates.
Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.
*/

bool containsDuplicate(int* a, int n)
{
    int max=a[0],min=a[0],i;
    for(i=1;i<n;i++)
    {
        max=(max>a[i])?max:a[i];
        min=(min<a[i])?min:a[i];
    }
    int *b=(int *)malloc(sizeof(int)*(max-min+1));
    memset(b,0,max-min+2);
    for(i=0;i<n;i++)
    {
        if(*(b+a[i]-min)!=0)
            return 1;
        else *(b+a[i]-min)=1;
    }
    return 0;
}
