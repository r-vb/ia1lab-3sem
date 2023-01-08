#include<stdio.h>

int reverse(int *pn);

int main()
{
        int num, *pn, original, rev;
    printf("Enter the number to check: ");
    scanf("%d",&num);
        original = num;
        pn = &num;
    rev = reverse(&num);
        if (original == rev)
            printf("%d is a Palindrome number.\n",original);
        else
            printf("%d is NOT a Palindrome number.",original);
return 0;
}

int reverse(int *pn)
{
       int digit,reverse;
    reverse=0;
        while (*pn != 0)
        {
            digit=*pn % 10;
            reverse=(reverse*10)+digit;
            *pn = *pn / 10;
        }
return reverse;
}