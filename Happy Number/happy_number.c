/* Happy Number
Write an algorithm to determine if a number is "happy".
A happy number is a number defined by the following process:
Starting with any positive integer, replace the number by the sum of the squares of its digits,
and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
Those numbers for which this process ends in 1 are happy numbers.
Example: 19 is a happy number

12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1
*/

bool isHappy(int n)
{
    if(n<=0)
        return 0;
    else
    if(n<=9)
    {
        if(n==1 || n==7)
            return 1;
        else return 0;
    }
    else
    {
        int a=0,b=0;
        while(n!=0)
        {
            b=n%10;
            a+=b*b;
            n=n/10;
        }
        return isHappy(a);
    }
}
