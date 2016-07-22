/* Power of 2
Given an integer, write a function to determine if it is a power of two.
*/

bool isPowerOfTwo(int n) {
    if(n==1)
	return 1;
	if(n==0)
	return 0;
    if(n%2!=0)
    return 0;
    else
    return isPowerOfTwo(n/2);
}
