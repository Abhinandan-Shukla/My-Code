/*Climbing Stairs
You are climbing a stair case. It takes n steps to reach to the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
*/

int climbStairs(int n)
{
    if(n<3)
    return n;
    else
    {
        int a[n+1];
        a[0]=0;
        a[1]=1;
        a[2]=2;
        int i;
        for(i=3;i<n+1;i++)
        a[i]=a[i-1]+a[i-2];
        return a[n];
    }
}
