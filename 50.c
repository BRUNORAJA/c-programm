#include<stdio.h>
#include<stdbool.h>
#include<math.h>
 

bool isPowerOfTwo(int n)
{
   return (ceil(log2(n)) == floor(log2(n)));
}
 
void main()
{
    isPowerOfTwo(31)? printf("Yes\n"): printf("No\n");
    isPowerOfTwo(64)? printf("Yes\n"): printf("No\n");
    getch();
}