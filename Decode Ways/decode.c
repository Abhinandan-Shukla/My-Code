/* Decode ways
A message containing letters from A-Z is being encoded to numbers using the following mapping:
'A' -> 1
'B' -> 2
...
'Z' -> 26
Given an encoded message containing digits, determine the total number of ways to decode it.

For example,
Given encoded message "12", it could be decoded as "AB" (1 2) or "L" (12).

The number of ways decoding "12" is 2.
*/

int numDecodings(char* s) {

    if(strlen(s)==0 || s[0]=='0')
        return 0;

    int i,cur=1,prev1=1,prev2=1;
    for(i=1;i<strlen(s);i++)
    {
        cur=0;
        if(s[i]!='0')
            cur=prev1;

        if(s[i-1]=='1' || (s[i-1]=='2' && s[i]>=48 && s[i]<=54))
            cur+=prev2;

        prev2=prev1;
        prev1=cur;

    }
    return cur;
}
