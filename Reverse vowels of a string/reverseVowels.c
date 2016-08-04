/*Reverse Vowels of a string
Write a function that takes a string as input and reverse only the vowels of a string.

Example 1:
Given s = "hello", return "holle".

Example 2:
Given s = "leetcode", return "leotcede".
*/

void swap(char*s ,int a, int b)
{
    char temp=s[a];
    s[a]=s[b];
    s[b]=temp;
}

char* reverseVowels(char* s)
{
    int i,j=0;
    while(s[j])
    {
        j++;
    }
    int size=j-1;

    for(i=0;i<j;i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
        {
            for(j=size;j>i;j--)
            {
                if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u' || s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j]=='O' || s[j]=='U')
                {
                    swap(s,i,j);
                    break;
                }
            }
            size=j-1;

        }
    }
    return s;
}
