#include<stdio.h>

int largest(int *pa, int *pb);

int main()
{
        int a, b, *p, *q, lar;
    printf("Enter value of 'a': ");
    scanf("%d",&a);
        p = &a;
    printf("Enter value of 'b': ");
    scanf("%d",&b);
        q = &b;
    lar = largest(p,q);
    printf("\nLargest of the two is %d\n\n",lar);
return 0;
}

int largest(int *pa, int *pb)
{       int big;
    big = *pa;
    if (big < *pb)
    {
        big = *pb;
    }
return big;
}