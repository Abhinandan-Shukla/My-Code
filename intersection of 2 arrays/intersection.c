/* Intersection of two Arrays
Given two arrays, write a function to compute their intersection.
Example:
Given nums1 = [1, 2, 2, 1], nums2 = [2, 2], return [2].
Note:
Each element in the result must be unique.
The result can be in any order.
*/

/*
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */

void mergesort(int* a, int s, int e)
{
    if(s==e)
        return;
    else
    {
        int n=(s+e)/2;
        mergesort( a,s,n);
        mergesort( a,n+1,e);
        merge(a,s,n,n+1,e);
    }
}

void merge(int* a,int s1, int e1, int s2, int e2)
{
    int i=s1,j=s2,k=0, b[e2-s1+1];
    while(i<=e1 || j<=e2)
    {
        if(i>e1)    //First half of array is over
        {
            while(j<=e2)
            {
                b[k]=a[j];
                k++;
                j++;
            }
        }
        else
        {
            if (j>e2)   //Second half of array is over
            {
                while(i<=e1)
                {
                    b[k]=a[i];
                    k++;
                    i++;
                }
            }
            else
            {
                if(a[i]<=a[j])   //find the smaller of the two numbers and push it in the new array
                {
                    b[k]=a[i];
                    k++;
                    i++;
                }
                else
                {
                    b[k]=a[j];
                    k++;
                    j++;
                }
            }
        }
    }
    for(i=s1;i<=e2;i++)
    {
        a[i]=b[i-s1];
    }
}

int* intersection(int* a1, int n1, int* a2, int n2, int* r) {
    if(n1==0 || n2==0)
    return NULL;
    else{
    mergesort(a1,0,n1-1);
    mergesort(a2,0,n2-1);
    int i=0,j=0,k=n1+n2-1;
    int *a=(int *)malloc(sizeof(int)*(n1+n2));
    while(i<n1 && j<n2)
    {
        if(a1[i]<a2[j])
        {
            while(a1[i]<a2[j] && i<n1 && j<n2)
                i++;
        }
        else if(a2[j]<a1[i])
        {
            while(a2[j]<a1[i] && i<n1 && j<n2)
                j++;
        }
        else
        {
            if(a1[i]==a2[j] && i<n1 && j<n2)
            {
                if(k==n1+n2-1 || a1[i]!=a[k+1])
                {
                    a[k]=a1[i];
                    k--;
                }
            }
            i++;
            j++;
        }
    }
    *r=n1+n2-k-1;
    return a+k+1;
    }
}
