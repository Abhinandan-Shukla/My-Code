//Reverse String
//Write a function that takes a string as input and returns the string reversed.

void swap(char* s,int a,int b)
{
    char temp=s[a];
    s[a]=s[b];
    s[b]=temp;
}

char* reverseString(char* s)
{
    if(s)
    {
        int i,size=0;
        while(s[size])
            size++;
        for(i=0;i<size/2;i++)
            swap(s,i,size-i-1);
        return s;
    }
    else
    return s;
}
