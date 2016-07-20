/* Excel Sheet Column Number
Related to question Excel Sheet Column Title
Given a column title as appear in an Excel sheet, return its corresponding column number.
For example:

    A -> 1
    B -> 2
    C -> 3
    ...
    Z -> 26
    AA -> 27
    AB -> 28
*/

int titleToNumber(char* s)
{
    int i,num=0,len=strlen(s);

    for(i=0;i<len;i++)
        num += (s[i]-64)*pow(26,len-1-i);

    return num;
}
