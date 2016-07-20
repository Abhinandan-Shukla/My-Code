#include <stdio.h>
#include <math.h>

int gcd(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = a % b;

        a = b;
        b = temp;
    }
    return a;
}

void right_rotate(int *a,int n,int k)
{
    int g= gcd(n,k),i,j,temp;
    for(i=0;i<g;i++)
    {
        j=(i-k)<0?i-k+n:i-k;

        temp=a[j];
        while(j!=i)
        {
            a[j]=a[(j-k)<0?j-k+n:j-k];
            j=(j-k)<0?j-k+n:j-k;
        }
        a[j]=temp;

    }
}

int main()
{
    int n,k,i;
    scanf("%d %d",&n,&k);
    int* a;
    a=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    right_rotate(a,n,k);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
