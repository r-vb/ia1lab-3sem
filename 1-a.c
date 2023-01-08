#include<stdio.h>

void swaping(int *pa, int *pb);

int main()
{
        int a, *pa, b, *pb;
    printf("Enter value of 'a': ");
    scanf("%d",&a);
    printf("Enter value of 'b': ");
    scanf("%d",&b);
    swaping(&a,&b);
    printf("After Swapping--\n");
    printf("Value of 'a' is: %d\n",a);
    printf("Value of 'b' is: %d\n",b);
return 0;
}

void swaping(int *pa, int *pb){
        int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}