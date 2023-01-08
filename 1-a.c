#include<stdio.h>

void swaping(int *pa, int *pb);

int main()
{
        int a, *p, b, *q;
    printf("Enter value of 'a': ");
    scanf("%d",&a);
    printf("Enter value of 'b': ");
    scanf("%d",&b);
        p = &a;
        q = &b;
    swaping(p,q);
    printf("After Swapping--\n\n");
    printf("Value of 'a' is: %d\n",*p);
    printf("Value of 'b' is: %d\n",*q);
return 0;
}

void swaping(int *pa, int *pb)
{
        int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}