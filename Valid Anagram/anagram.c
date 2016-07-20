/* Valid Anagram
Given two strings s and t, write a function to determine if t is an anagram of s.
For example,
s = "anagram", t = "nagaram", return true.
s = "rat", t = "car", return false.
Note:
You may assume the string contains only lowercase alphabets.
*/

bool isAnagram(char* s, char* t)
{
    if(strlen(s)!=strlen(t))
        return 0;
	else
	{
		int len=strlen(s),a[26],b[26],i;
		for(i=0;i<26;i++)
		{
			a[i]=0;
			b[i]=0;
		}
		for(i=0;i<len;i++)
		{
			a[s[i]-97]++;
			b[t[i]-97]++;
		}
		for(i=0;i<26;i++)
		{
			if(a[i]!=b[i])
			return 0;
		}
		return 1;
	}
}
