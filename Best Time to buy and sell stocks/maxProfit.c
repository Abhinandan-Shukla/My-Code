/* Best time to buy and sell stocks
Say you have an array for which the ith element is the price of a given stock on day i.
If you were only permitted to complete at most one transaction (ie, buy one and sell one share of the stock), design an algorithm to find the maximum profit.

Example 1:
Input: [7, 1, 5, 3, 6, 4]
Output: 5

max. difference = 6-1 = 5 (not 7-1 = 6, as selling price needs to be larger than buying price)
Example 2:
Input: [7, 6, 4, 3, 1]
Output: 0

In this case, no transaction is done, i.e. max profit = 0.
*/

int max(int a,int b)
{
    (a>b)?a:b;
}

int maxProfit(int* a, int n)
{
    int p[n],i,m;
    p[0]=0;
    m=p[0];
    for(i=1;i<n;i++)
    {
        p[i]=max((p[i-1]+a[i]-a[i-1]),(a[i]-a[i-1]));
        if(p[i]>m)
        m=p[i];
    }
    return m;
}
