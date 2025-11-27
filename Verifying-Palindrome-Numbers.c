/*
Take an 4 digit integer input N and check whether the number is a Palindrome or not.

Constraints:
1000 <= N <= 9999

For example.
1221, 3445, 7997 -> Yes it is palindrome (return 1)
3456, 4589, 8364 -> Not a palindrome (return 0)
*/
#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    if( (num/1000==num%10) && ( (((num/10)/10)%10) == ((num/10)%10)) )
    {
        printf("It is a palindrome");
    }
    else
    {
        printf("It is not a palindrome");
    }

    return 0;
}
