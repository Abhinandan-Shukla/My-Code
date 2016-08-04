#include <stdio.h>

int traverseSpiral(int **a,int n,int k)
{
    int x=0,y=0,count=0,r=n,c=n,i;
    while(x<r && y<c)
    {
        //traversing first of the remaining rows
        for(i=y;i<c;i++)
        {
            count++;
            if(count==k)
                return a[x][i];
        }
        x++;

        //traversing last of the remaining column
        for(i=x;i<r;i++)
        {
            count++;
            if(count==k)
                return a[i][c-1];
        }
        c--;

        //traversing last of remaining rows
        if(x<r)
        {
            for(i=c-1;i>=y;i--)
            {
                count++;
                if(count==k)
                    return a[r-1][i];
            }
            r--;
        }

        //traversing first of remain column
        if(y<c)
        {
            for(i=r-1;i>=x;i--)
            {
                count++;
                if(count==k)
                    return a[i][y];
            }
            y++;
        }


    }
}

int main()
{
    int n,k,i,j,count=0,x=0,y=0;
    scanf("%d %d",&n,&k);
    int **a=(int **)malloc(sizeof(int *)*n);

    for(i=0;i<n;i++)
        a[i]=(int *)malloc(sizeof(int)*n);

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);


    printf("%d",traverseSpiral(a,n,k));



}
