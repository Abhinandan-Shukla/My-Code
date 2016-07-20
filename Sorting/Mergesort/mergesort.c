#include <stdio.h>
#include <math.h>

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

int main()
{
    int n,i;
    scanf("%d",&n);
    int* a;
    a=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    mergesort(a,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}







